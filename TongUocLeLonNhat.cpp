#include <bits/stdc++.h>

using namespace std;
long long S(long long n){
	if(n<=1) return n;
	return ((n+1)/2)*((n+1)/2)+S(n/2);
}
int main() {
	long long t,a,b;
	cin >> t;
	while(t--){
		cin >> a >> b;
		cout << S(b)-S(a-1) << "\n";
	}
	return 0;
}

