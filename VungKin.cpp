#include <bits/stdc++.h>

using namespace std;

int a[205][205],m,n;
int hh[]={-1,1,0,0};
int hc[]={0,0,1,-1};
void DFS(int u, int v){
	stack<pair<int,int>> s;
	a[u][v]=1;
	s.push({u,v});
	while(s.size()>0){
		u=s.top().first, v=s.top().second;
		s.pop();
		for(int h=0; h<4; h++){
			int i=hh[h], j=hc[h];
			if(1<=u+i && u+i<=n && 1<=v+j && v+j<=m && a[u+i][v+j]==0){
				a[u+i][v+j]=1;
				s.push({u+i,v+j});
			}	
		}
		
	}
}
int main() {
	int g[n*m+4]={}, k=0;
	cin >> m >> n;
	for (int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			cin >> a[i][j];
		}
	}
	
	for(int j=0; j<n; j++){
		if(a[0][j]==0) DFS(0,j);
		if(a[m-1][j]==0) DFS(m-1,j);
	}
	for(int i=0; i<m; i++){
		if(a[i][0]==0) DFS(i,0);
		if(a[i][n-1]==0) DFS(i,n-1);
	}
	for (int i=1; i<m-1; i++){
		for(int j=1; j<n-1; j++){
			if(a[i][j]==0){
				DFS(i, j);
				k++;
			}	
		}
	}
	cout << k << endl;
	return 0;
}

