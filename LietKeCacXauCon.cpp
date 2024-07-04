#include <bits/stdc++.h>

using namespace std;
set<string> dic;
void lietke(string x){
	if(x=="") return;
	if(dic.find(x) == dic.end()){
		dic.insert(x);
		lietke(x.substr(0,x.size()-1));
		lietke(x.substr(1,x.size()-1));
	}
}
int main() {
	string s;
	cin >> s;
	lietke(s);
	for(auto x:dic)cout << x << "\n";
	return 0;
}

