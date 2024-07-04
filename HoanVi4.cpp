#include <bits/stdc++.h>

using namespace std;

int x[100],n, d[100]={}, dem;
void TRY(int k){
	if(k==n){
		for(int i=0; i<n; i++)
		cout << x[i] << " ";
		cout << "\n";
		dem++;
		return;
	}
	for(int t=1; t<=n; t++){
		if(d[t]==0){
			if(k==0){
				d[t]=1;
				x[k]=t;
				TRY(k+1);	
			}
			else{
				if(((t+x[k-1])%4!=0)){
					d[t]=1;
					x[k]=t;
					TRY(k+1);
				}
			}
			d[t]=0;
		}
	}
}
int main() {
	cin >> n;
	TRY(0);
	cout << dem;
	return 0;
}

