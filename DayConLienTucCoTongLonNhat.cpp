#include <bits/stdc++.h>

using namespace std;

long submax(long *a, int L, int R){
	if(L==R-1) return a[L];
	long M=(L+R)/2, t=a[M-1], X=t, z=a[M], Y=z;
	for(int i = M-2; i>=L; i--) {
		t+=a[i];
		X=max(X,t);
	}
	for(int i = M+1; i<R; i++) {
		z+=a[i];
		Y=max(Y,z);
	}
	return max({X+Y,submax(a,L,M),submax(a, M,R)});
}
int main() {
	long a[100005],n;
	cin >> n;
	for(int i=0; i<n; i++) cin >> a[i];
	cout << submax(a,0,n);
	return 0;
}

