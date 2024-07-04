#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, u, v;
	cin >> n;
	queue<int> Q;
	map<int, string> M;
	if(n==5){
		cout << "0";
		return 0;
	}
	Q.push(8%n); M[8%n]="8";
	Q.push(6%n); M[6%n]="6";
	while(Q.size() && M.find(0)==M.end()){
		u = Q.front();
		Q.pop();
		v=(10*u+6)%n; if(M.find(v)==M.end()){Q.push(v); M[v]=M[u]+"6";}
		v=(10*u+8)%n; if(M.find(v)==M.end()){Q.push(v); M[v]=M[u]+"8";}
	}
	if(M.find(0)==M.end()) cout << 0;
	else cout << M[0];
	return 0;
}

