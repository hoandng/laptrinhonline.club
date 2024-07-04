#include <bits/stdc++.h>

using namespace std;

string x,y;
int n,m,C[100][100];
int main() {
	cin >> x; n=x.size(); x="$"+x;
	cin >> y; m=y.size(); y="$"+y;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=m; j++){
			C[i][j]=x[i]==y[j]?C[i-1][j-1]+1:max(C[i-1][j], C[i][j-1]);
		}
	}
	cout << C[n][m];
	return 0;
}

