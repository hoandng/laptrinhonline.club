#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, res = 0;
	cin >> n;
	priority_queue<int> Q;
	vector<vector<int> > a(10005);
	int t, q, M = 0;
	for(int i = 1; i <= n; i++){
		cin >> t >> q;
		M = max(M,t);
		a[t].push_back(q);
	}
	for(int i = M; i>=1; i--){
		for(int x:a[i]) Q.push(x);
		if(Q.size()){
			res+=Q.top();
			Q.pop();
		}
	}
	cout << res;
	return 0;
}

