#include <bits/stdc++.h>

using namespace std;
long socap(long a){
	return a*(a-1)/2;
}
int main() {
	long n,m;
	cin >> n >> m;
	if(n <= m)cout << "0 0";
	else{
		long min = m*socap(n/m)+(n%m)*(n/m);
		long max = socap(n-m+1);
		cout << min << " " << max;
	}
	return 0;
}

