#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, m, x, y;
	cin >> n >> m;
	vector<int> A[n+1];
	for(int i = 0; i < m; i++){
		cin >> x >> y;
		A[x].push_back(y);
		A[y].push_back(x);
	}
	queue<int> Q;
	map<int, int> M,F;
	cin >> F[0];
	for(int i=0; i < F[0]; i++){
		cin >> x;
		Q.push(x);
		M[x]=0;
	}
	while(Q.size()){
		int u = Q.front();
		Q.pop();
		for(int v:A[u]){
			if(M.find(v)==M.end()){
				Q.push(v);
				M[v]=M[u]+1;
				F[M[v]]++;
			}
		}
	}
	for(auto f:F){
		cout << "\nF" << f.first << ": " << f.second;
	}
	return 0;
}

