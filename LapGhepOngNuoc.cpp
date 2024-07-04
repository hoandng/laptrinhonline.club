#include <bits/stdc++.h>

using namespace std;

int main() {
	long n, k, res = 0;
	cin >> n >> k;
	priority_queue<long, vector<long>, greater<long>>Q;
	for(int i = 0; i < n; i++){
		long a;
		cin >> a;
		Q.push(a);
	}
	while(Q.size()>1){
		long i = 1, u = 0;
		long size = Q.size();
		while(i <= min(k ,size)){
			u += Q.top();
			Q.pop();
			i++;
		}
		res += u;
		Q.push(u);
	}
	cout << res;
	return 0;
}

