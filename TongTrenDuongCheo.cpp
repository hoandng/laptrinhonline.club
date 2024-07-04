#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	long a[n+5][n+5];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++)
			cin >> a[i][j];
	}
	for(int j = n-1; j >=0; j--){
		int i = 0, k=j;
		long sum=0;
		while(i<n&&k<n){
			sum+=a[i][k];
			i++;
			k++;
		}
		cout << sum << "\n";
	}
	for(int i = 1; i < n; i++){
		int j = 0, k=i;
		long sum=0;
		while(j<n&&k<n){
			sum+=a[k][j];
			j++;
			k++;
		}
		cout << sum << "\n";
	}
	return 0;
}

