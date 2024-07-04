#include <bits/stdc++.h>

using namespace std;
#define pii pair<int, int> 
int n, m;
pii s,f;
int a[1005][1005];
pii d[] = {{0,1},{0,-1},{1,0},{-1,0}};
void BFS(){
	queue<pii> Q;
	map<pii, int> M;
	Q.push(s);
	M[s]=1;
	while(!Q.empty()&&M.find(f)==M.end()){
		pii p = Q.front();
		Q.pop();
		for(auto x:d){
			int u = p.first + x.first;
			int v = p.second + x.second;
			if(M.find({u,v})==M.end() && u>=1 && u<=n && v>=1 && v<=m && a[u][v]==0 && M[{u,v}]==0){
				Q.push({u,v});
				M[{u,v}]=M[p]+1;
			}
		}
	}
	cout << M[f]-1;
}
int main() {
	cin >> n >> m;
	for(int i = 1; i <= n; i++)
	for(int j = 1; j <= m; j++) cin >> a[i][j];
	cin >> s.first >> s.second;
	cin >> f.first >> f.second;
	BFS();
	return 0;
}

