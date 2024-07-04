#include <bits/stdc++.h>

using namespace std;

int n,d;
string s;
void BFS(){
	queue<int> Q;
	map<int,int> M;
	Q.push(1);
	M[1]=1;
	while(!Q.empty() && M.find(n)==M.end()){
		int x = Q.front(); Q.pop();
		for(int i = 1; i <= d; i++){
			if(x+i<=n && s[x+i-1] == '1' && M[x+i]==0){
				Q.push(x+i);
				M[x+i]=M[x]+1;
			}
		}
	}
	cout << M[n]-1;
}
int main() {
	cin >> n >> d >> s;
	BFS();
	return 0;
}

