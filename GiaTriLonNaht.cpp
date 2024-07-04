#include <bits/stdc++.h>

using namespace std;

int main() {
	long n;
	cin >> n;
	priority_queue<long> P;
	priority_queue<char, vector<char>, greater<char>> Q;
	for(int i = 0; i <n; i++){
		long x; cin >> x;
		P.push(x);
	}
	for(int i = 0; i <n-1; i++){
		char x; cin >> x;
		Q.push(x);
	}
	long T=0;
	T=P.top(); P.pop();
	while(!P.empty()){
		char c = Q.top(); Q.pop();
		if(c=='+'){
			long u = P.top(); P.pop();
			T+=u;
		}
		if(c=='-'){
			long u = P.top(); P.pop();
			T-=u;
		}
	}
	cout << T;
	return 0;
}

