#include <bits/stdc++.h>

using namespace std;

void TRY(int *x, int k, int n){
	if(k==n){
		for(int i = 0; i < n; i++){
			cout <<x[i];
		}
		cout << endl;
		return;
	}
	for(x[k]=0; x[k]<2; x[k]++)
	TRY(x,k+1,n);
}
int main() {
	int x[1000], n;
	cin >> n;
	TRY(x, 0,n);
	return 0;
}

