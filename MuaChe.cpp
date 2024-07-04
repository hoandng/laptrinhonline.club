#include <bits/stdc++.h>
using namespace std;

int main() {
	long n, M,res=0;
	cin >> n >> M;
	long a[n+5];
	for(int i = 0; i<n; i++){
		cin >> a[i];
	}
	sort(a, a+n);
	long T=0;
	for(int i = 0; i < n; i++){
		if(T+a[i]<=M){
			T+=a[i];
			res++;
		}
	}
	cout << res;
	return 0;
}

