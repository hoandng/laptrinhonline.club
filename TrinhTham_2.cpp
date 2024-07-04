#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	int a[n+5];
	priority_queue<int> Q;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	int i = 0;
	while(i<(n-k+1)){
		int j = 1;
		int r = i;
		while(j <= k){
			cout << a[r] << " ";
			Q.push(a[r]);
			r++;
			j++;
		}
		cout << endl;
		cout << Q.top() << "\n";
		while(j--){
			Q.pop();
		}
		i++;
	}
	return 0;
}

