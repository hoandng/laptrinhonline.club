#include <bits/stdc++.h>

using namespace std;

int main() {
	string s;
	int t;
	char a,b,c;
	cin >>s;
	cin >> t;
	while(t--){
		cin >> c;
		if(c=='R'){
			cin >> a >> b;
			for(int i = 0; i < s.size(); i++){
				if(s[i]==a) s[i]=b;
			}
		}
		else{
			cin >> a;
			int i = 0;
			while(s.size()!=0 && s.find(a)!=string::npos){
				if(s[i]==a){
					s.erase(i,1);
					i = -1;
				}
				i++;
			}
		}
	}
	cout << s;
	return 0;
}

