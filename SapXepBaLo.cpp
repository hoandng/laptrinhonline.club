#include <bits/stdc++.h>

using namespace std;

int c[10004]={},n,M=1e4,a,b;
int main() {
	cin >> n;
	for(int i=1;i<=n;i++){
		cin >> a >> b;
		for(int j=1e4; j>=a; j--){
			c[j]=max(c[j],b+c[j-a]);
		}
	}
	int t;
	cin >> t;
	while(t--){
		cin >> M;
		cout << c[M] << endl;
	}
	return 0;
}

