#include <bits/stdc++.h>

using namespace std;
#define  pii pair<int, int>
int a,b,k;
pii bd,kt;
void BFS(){
	queue<pii> q;
	map<pii, int> m={};
	q.push(bd);
	m[bd]=1;
	pii buoc[]={{a,b}, {-a,b}, {a,-b}, {-a,-b}, {b,a}, {b,-a}, {-b,a}, {-b,-a}};
	while(!q.empty() && m[kt]==0){
		pii p = q.front(); q.pop();
		if(m[p]>k){
			cout << "NO" << "\n";
			return;
		}
		for(auto x:buoc){
			int u = p.first+x.first;
			int v = p.second+x.second;
			if(m[{u,v}]==0){
				q.push({u,v});
				m[{u,v}]=m[p]+1;
			}
		}
	}
	cout << m[kt]-1 << "\n";
}
int main() {
//	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	while(t--){
		cin >> a >> b;
		cin >> bd.first >> bd.second;
		cin >> kt.first >> kt.second;
		cin >> k;
		BFS();
	}
	return 0;
}

