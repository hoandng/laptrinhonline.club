#include <bits/stdc++.h>

using namespace std;

int main() {
	string s;
	getline(cin,s);
	queue<char> q;
	for(int i = 0; i < s.size(); i++){
		char c = tolower(s[i]);
		if(c=='@'||c=='#'||c=='%'||c=='$'){
				q.push(s[i]);
		}
		else{
			if(c==32){
				while(!q.empty()){
					cout << q.front();
					q.pop();
				}
				cout << " ";
			}
			else cout << s[i];
		}
	}
	while(!q.empty()){
		cout << q.front();
		q.pop();
	}
	cout << " ";
	return 0;
}

