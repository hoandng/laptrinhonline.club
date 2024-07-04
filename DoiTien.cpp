#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, m = pow(10,4), q, t;
	cin >> n >> q; 
	int a[n+5];
	for(int i=0; i < n; i++){
		cin >> a[i];
	}
	queue<int> Q; Q.push(0);
	map<int, int> M; M[0]=0;
	while(Q.size()){
		int u = Q.front();
		Q.pop();
		for(int i = 0; i < n; i++){
			int v = a[i]+u;
			if(v <= m && M.find(v)== M.end()){
				Q.push(v);
				M[v] = M[u]+1;
			}
		}
	}
	while(q--){
		cin >> t;
		if(M.find(t)==M.end()) cout << -1 << endl;
		else cout <<M[t]<<endl;	
	}
	
	return 0;
}

