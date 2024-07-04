#include <bits/stdc++.h>

using namespace std;

int main() {
	long n, res = 0, k;
	cin >> n >> k;
	long a[n];
	for(long &x:a) cin >> x;
	sort(a, a+n, greater<int>());
	for(int i = 0; i < n && a[i] > i*k; i++){
		res+=a[i]-i*k;
	}
	cout << res;
	return 0;
}

