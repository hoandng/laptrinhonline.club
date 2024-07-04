#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, res = 0;
	cin >> n;
	priority_queue<int, vector<int>, greater<int>>Q;
	for(int i = 0; i < n; i++){
		int a;
		cin >> a;
		Q.push(a);
	}
	while(Q.size()>1){
		int u = Q.top();
		Q.pop();
		int v = Q.top();
		Q.pop();
		res += u+v;
		Q.push(u+v);
	}
	cout << res;
	return 0;
}

