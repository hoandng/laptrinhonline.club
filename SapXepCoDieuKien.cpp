#include <bits/stdc++.h>

using namespace std;
struct ss{
	bool operator ()(int a, int b){
		if(a%3==b%3) return a>b;
		return a%3>b%3;
	}
};
int main() {
	int n;
	cin >> n;
	priority_queue<int, vector<int>, ss> Q;
	for(int i = 0; i < n; i++){
		int a;
		cin >> a;
		Q.push(a);
	}
	while(Q.size()){
		cout << Q.top() << " ";
		Q.pop();
	}
	return 0;
}

