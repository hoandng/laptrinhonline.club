#include <bits/stdc++.h>

using namespace std;

int main() {
	long n, res = 0;
	cin >> n;
	long a[n];
	for (auto &x : a){
		cin >> x;
	}
	long z = a[n-1];
	for(int i = n-1; i >= 0 ; i--){
		res+=a[i]<z?z-a[i]:0;
		z = a[i]>z?a[i]:z;
	}
	cout << res;
	return 0;
}
