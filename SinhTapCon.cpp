#include <bits/stdc++.h>

using namespace std;

int x[100],n,m;
void TRY(int k){
	if(k==m){
		for(int i=0; i<m; i++) cout << x[i] << (i==m-1?"\n":" ");
		return;
	}
	for(x[k]=x[k-1]+1; x[k]<=n; x[k]++) TRY(k+1);
}
int main() {
	cin >> n >> m;
	TRY(0);
	return 0;
}

