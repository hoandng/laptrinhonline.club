#include <bits/stdc++.h>

using namespace std;

int main() {
	char c;
	int t=10;
	while(t--){
		cin >> c;
		if(c=='o') cout << "thuong\n";
		if(c=='O') cout << "hoa\n";
		if(c=='0') cout << "khong\n";
	}
	return 0;
}

