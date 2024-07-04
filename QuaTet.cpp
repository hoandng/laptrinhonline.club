#include <bits/stdc++.h>

using namespace std;

int main() {
	int a[1000],n,m,Max,Min,res=1e9;
	cin >> n >> m;
	for(int i = 0; i<m; i++)cin >> a[i];
	sort(a+0, a+m);
	for(int i = 0; i<m-n+1; i++){
		Min = i;
		Max = Min + n - 1;
		res = min(res, a[Max]-a[Min]);
	}
	cout << res;
	return 0;
}

