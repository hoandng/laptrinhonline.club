#include <bits/stdc++.h>

using namespace std;

int n, a[20][20]={}, x[20]={}, visited[20]={}, res = 1e9, t=0;
void Try(int i){
	for(int j=1; j<=n;j++){
		if(visited[j] == 0){
			visited[j] = 1;
			x[i]=j;
			t+=a[x[i-1]][x[i]];
			if(i==n){
				res = min(res, t+a[x[n]][1]);
			}
			else{	
			Try(i+1);
			}
			visited[j]=0;
			t-=a[x[i-1]][x[i]];
		}
	}
}
int main() {
	cin >> n;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++)
			cin >> a[i][j];
	}
	visited[1]=1;
	x[1]=1;
	Try(2);
	cout << res;
	return 0;
}

