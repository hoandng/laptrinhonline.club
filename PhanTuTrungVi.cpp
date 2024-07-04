#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n, x;
	cin >> n;
	priority_queue<int> L;
	priority_queue<int, vector<int>, greater<int>> R;
	for(int i = 1; i <= n; i++){
		cin >> x;
		if(i%2) L.push(x);
		else R.push(x);
		if(i >= 2 && L.top() > R.top()){
			int a = L.top(); L.pop();
			int b = R.top(); R.pop();
			L.push(b); R.push(a);
		}
		cout << L.top() << " ";
	}
	return 0;
}

