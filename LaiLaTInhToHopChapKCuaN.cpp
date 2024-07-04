#include <bits/stdc++.h>

using namespace std;
#define LL long long
LL M=1e9+7;
LL Pow(LL a, LL n){
	if (n==0) return 1;
	if(n%2) return a*Pow(a*a%M,n/2)%M;
	return Pow(a*a%M,n/2);
}
int main() {
	LL A[100005]={1,1}, B[100005]={1,1}, t, k, n;
	for(int i=2; i<=1e5; i++){
		A[i]=(A[i-1]*i)%M;
		B[i]=(B[i-1]*Pow(i, M-2))%M;
	}
	cin >> t;
	while(t--){
		cin >> n >> k;
		cout << A[n]*B[k]%M*B[n-k]%M << endl;
	}
	return 0;
}

