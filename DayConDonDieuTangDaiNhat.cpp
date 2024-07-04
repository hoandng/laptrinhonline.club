#include <bits/stdc++.h>

using namespace std;

int *Lower_bound(int *l, int *r, int n){
    if(l>=r) return r;
    int *u=l+(r-l)/2;
    if(*u<n) return Lower_bound(u+1,r,n);
    if(*(u-1)<n) return u;
    return Lower_bound(l,u,n);
}
int main() {
	int n, a[100005], k=0, x;
	cin >> n >> a[0];
	while(--n){
		cin >> x;
		if(x>a[k]) a[++k]=x;
		*Lower_bound(a,a+k+1,x)=x;
	}
	cout << k+1;
	return 0;
}
