#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, m, x, y, k=0;
	freopen("g.txt","r",stdin);
	cin >> n >> m;
	vector<int> a[n+5];
	int d[n+5] = {}, g[n+5] = {};
	for(int i = 1; i <= m; i++){
		cin >> x >> y;
		a[x].push_back(y);
		a[y].push_back(x);
	}
	for(int i=1; i<=n; i++){
		if(d[i]==0){
			k++;
			d[i]=k;
			g[k]=1;
			stack<int> s; s.push(i);
			while(s.size()){
				int u = s.top();
				s.pop();
				for(int v:a[u])
					if(d[v]==0)
					{
						d[v]=k;
						g[k]++;
						s.push(v);
					}
			}
		}
	}
	cout<<k<<endl<<*max_element(g+1, g+k+1);
	return 0;
}

