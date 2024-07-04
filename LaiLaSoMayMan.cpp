#include <bits/stdc++.h>

using namespace std;
#define ll long long
ll n, res=1e9;
void TRY(ll k, int i){
	if(k>1e10) return;
	if(k>=n&&i%2==0){
		int cnt=0;
		ll u = k;
		while(u>0){
			if(u%10==4)cnt++;
			u/=10;
		}
		if(i==cnt*2){	
		res=min(k,res);
		return;
		} 
	}
	TRY(k*10+4, i+1);
	TRY(k*10+7, i+1);
}
int main() {
	cin >> n;
	TRY(0, 0);
	cout << res;
	return 0;
}

