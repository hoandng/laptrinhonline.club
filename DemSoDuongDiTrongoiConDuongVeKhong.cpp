#include <bits/stdc++.h>

using namespace std;
long long dic[100005], M=1e9+7;
long zero(int n){
	if(n==0) return 1;
	if(dic[n])return dic[n];
	for(int a=1; a*a<=n; a++)
		if(n%a==0)
			dic[n]=(dic[n]+zero((a-1)*(n/a+1)))%M;
	return dic[n];
}
int main() {
	int q;
	cin >> q;
	while(q--){
		int x;
		cin >> x;
		cout << zero(x) << endl;
	}
	return 0;
}

