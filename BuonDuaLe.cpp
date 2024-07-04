#include <bits/stdc++.h>

using namespace std;

int main() {
	long n, k, m, res = 0, x;
	cin >> n >> k >> m;
	queue<int> q;
	for(int i = 1; i < n+k; i++){
		if(i <= n) cin >> x;
		else x = 0;
		q.push(x);
		while(q.size()>k) q.pop();
		long t = 0;
		while(q.size() && q.front() + t <=m){
			t+=q.front();
			q.pop();
		}
		if(q.size()){
			q.front()-=m-t;
			t=m;
		}
		res+=t;
	}
	cout << res;
	return 0;
}

