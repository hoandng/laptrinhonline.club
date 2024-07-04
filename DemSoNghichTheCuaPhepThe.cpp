#include <bits/stdc++.h>

using namespace std;

int a[100005], b[100005], c[100005],n;
long snt(int L, int R){
	if(L==R-1) return 0;
	int M=(L+R)/2, i=0,j=0,k;
	long s=snt(L,M)+snt(M,R);
	for(k=M-1; k>=L;k--)b[++i]=a[k];
	for(k=R-1; k>=M;k--)c[++j]=a[k];
	for(k=L;k<R;k++)
	if(i>0 && j>0){
		if(c[j]<b[i]){
			s+=i;
			a[k]=c[j--];
		}
		else a[k]=b[i--];
	}
	else a[k]=i>0?b[i--]:c[j--];
	return s;
}
int main() {
	cin >> n;
	for(int i = 1; i<=n; i++) cin >> a[i];
	cout << snt(1,n+1);
	return 0;
}

