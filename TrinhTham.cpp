#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	priority_queue <pair<int, int>> Q;
	for(int i = 1; i <= n; i++){
		int x;
		cin >> x;
		while(Q.size() && Q.top().first<=x) Q.pop();
		Q.push({x,i});
		if(i>=k){
			while(i-Q.top().second>=k) Q.pop();
			cout << Q.top().first << " ";
		}
	}
	
	return 0;
}

