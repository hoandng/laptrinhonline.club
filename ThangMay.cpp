#include <bits/stdc++.h>

using namespace std;
int n,k,m,s,f;
void BFS(){
	int d[n+5]={};
	queue<int> q;
	q.push(s);
	d[s]=1;
	while(q.size() && d[f] == 0){
		int u = q.front(); q.pop();
		for(int v:{u+k, u-m}){
			if(1<=v && v <=n && d[v]==0){
				d[v]=d[u]+1;
				q.push(v);
			}
		}
	}
	cout << d[f]-1;
}
int main() {
	cin >> n;
	cin >> k >> m >> s >> f;
	BFS();
	return 0;
}

