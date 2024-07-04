#include <bits/stdc++.h>

using namespace std;
typedef pair<int, int> pii;
map<pii, pii> P;
void path(pii v){
	if(v.first == 0 && v.second == 0){
		cout << "(0,0)";
		return;
	}
	path(P[v]);
	cout << "->(" << v.first << "," << v.second << ")";
}
int main() {
	int n, m ,k;
	cin >> n >> m >> k;
	queue<pii> Q;
	map<pii,int> M;
	Q.push({0,0});
	M[{0,0}]=0;
	while(Q.size() !=0){
		int x = Q.front().first;
		int y = Q.front().second, z=x+y;
		Q.pop();
		pii Next[] = {{0,y}, {x,0}, {n,y}, {x,m}, {max(0, z-m), min(m, z)}, {min(n, z), max(0, z-n)}};
		for(auto t:Next){
			if(M.find(t)==M.end()){
				M[t]=M[{x,y}]+1;
				P[t]={x,y};
				Q.push(t);
				if(t.first==k or t.second == k){
					cout << M[t] << endl;
					path(t);
					return 0;
				}
			}
		}
	}
	cout << "Khong dong duoc nuoc";
	return 0;
}

