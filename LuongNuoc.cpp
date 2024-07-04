#include <bits/stdc++.h>

using namespace std;
long mymax(long a, long b){
	return a>b?a:b;
}
long mymin(long a, long b){
	return a<b?a:b;
}
int main() {
	long n, res=0;
	cin >> n;
	vector<long> a(n, 0), L(n, 0), R(n, 0);
	for (auto &x:a) cin >> x;
	partial_sum(a.begin(), a.end(), L.begin(), mymax);
	partial_sum(a.rbegin(), a.rend(), R.rbegin(), mymax);;
//	for(auto x : a) cout << x << " "; cout << endl;
//	for(auto x : L) cout << x << " "; cout << endl;
//	for(auto x : R) cout << x << " "; cout << endl;
	for(int i = 1; i < n-1; i++){
		long z = min(L[i-1],R[i+1]);
		res += z>a[i]?z-a[i]:0;
	}
	cout << res;
	return 0;
}

