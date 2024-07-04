#include <bits/stdc++.h>

using namespace std;
#define bd second
#define kt first
int main() {
	int q;
	cin >> q;
	while(q--){
		int n, res = 0, m = -1e9, t = -1e9;
		cin >> n;
		pair<int,int> a[n];
		for(auto &x:a) cin >> x.bd >> x.kt;
		sort(a, a+n);
		for(auto x:a){
			if(x.bd>m && x.bd > t){
				res++;
				if(m>t) m = x.kt;
				else t = x.kt;
			}
			else{
				if(x.bd>m){
					res++;
					m = x.kt;
				}
				if(x.bd>t){
					res++;
					t = x.kt;
				}
			}
		}
		cout << res << endl;
	}	
	return 0;
}

