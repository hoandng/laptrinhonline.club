#include <bits/stdc++.h>

using namespace std;

int x[100],n, d[100]={};
void TRY(int k){
	if(k==n){
		for(int i=0; i<n; i++)
		cout << x[i];
		cout << "\n";
		return;
	}
	for(int t=1; t<=n; t++){
		if(d[t]==0){
			d[t]=1;
			x[k]=t;
			TRY(k+1);
			d[t]=0;
		}
	}
}
int main() {
	cin >> n;
	TRY(0);
	return 0;
}

