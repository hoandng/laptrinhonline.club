#include <bits/stdc++.h>

using namespace std;
string a,b;
int n, k;
set<string> res;
void TRY(string s, int i){
	if(s.size() == n){
		k++;
		res.insert(s);
		return;
	}
	TRY(s+a[i], i+1);
	if(a[i]!=b[i])
	TRY(s+b[i], i+1);
}
int main() {
	cin >> n >> a >> b;
	TRY("", 0);
	cout << k << "\n";
	for(auto &s:res){
		cout << s << "\n";
	}
	return 0;
}

