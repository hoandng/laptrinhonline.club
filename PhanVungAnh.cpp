#include <bits/stdc++.h>

using namespace std;

int a[205][205],m,n;
int DFS(int u, int v){
	int d=1;
	stack<pair<int,int>> s;
	a[u][v]=1;
	s.push({u,v});
	while(s.size()>0){
		u=s.top().first, v=s.top().second;
		s.pop();
		for(int i=-1; i<=1; i++)
		for(int j=-1; j<=1; j++)
		if(1<=u+i && u+i<=n && 1<=v+j && v+j<=m && a[u+i][v+j]==0){
			a[u+i][v+j]=1;
			s.push({u+i,v+j});
			d++;
		}
	}
	return d;
}
int main() {
	cin >> m >> n;
	int g[m*n+4]={}, k=0;
	for (int i=1; i<=m; i++){
		for(int j=1; j<=n; j++){
			cin >> a[i][j];
		}
	}
	
	for (int i=1; i<=m; i++){
		for(int j=1; j<=n; j++){
			if(a[i][j]==0){
				g[k]=DFS(i, j);
				k++;
			}	
		}
	}
	cout << k << endl;
	sort(g+0, g+k);
	for(int i=0; i<k; i++){
		cout << g[i] << " ";
	}
	return 0;
}

