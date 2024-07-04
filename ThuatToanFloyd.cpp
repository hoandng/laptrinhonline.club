#include <bits/stdc++.h>

using namespace std;

int n,m, C[205][205]={};
//int P[105][105]={};
//void trace(int u, int v){
//	if(P[u][v]==0) cout << u << "->";
//	else{
//		trace(u,P[u][v]);
//		trace(P[u][v],v);
//	}
//}
int main() {
	int x,y,w,q;
	cin >> n >> m >> q;
	for(int i = 1; i <=n; i++){
		for(int j = 1; j < i; j++){
			C[i][j]=1e9;
			C[j][i]=1e9;
		}
	}
	while(m--){
		cin >> x >> y >> w;
		C[x][y]=w;
	}
	for(int k=1; k<=n; k++)
	for(int i=1; i<=n; i++)
	for(int j=1; j<=n; j++)
	{
		if(C[i][j]>C[i][k]+C[k][j]){
			C[i][j]=C[i][k]+C[k][j];
//			P[i][j]=k;
		}
	}
	while(q--){
		int u, v;
		cin >> u >> v;
		if(C[u][v]!=0 && C[u][v]!=1e9) cout << C[u][v] << "\n";
		else cout << -1 << "\n";
	}
//Truy vet
//	for(int i=1; i<=n; i++)
//	for(int j=1; j<=n; j++)
//	if(i!=j){
//		if(C[i][j]==1e9) cout << "\nKhong co duong de di " << i << " sang " << j;
//		else{
//			cout << "\nDuong " << i << " sang " << j << " " << C[i][j] << " ; ";
//			trace(i,j);
//			cout << j;
//		}
//	}
	return 0;
}

