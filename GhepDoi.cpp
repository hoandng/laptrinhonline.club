#include <bits/stdc++.h>

using namespace std;

int main() {
	int snam, snu;
	cin >> snam >> snu;
	int n = max(snam,snu)-min(snam,snu);
	cout << min(snam,snu) << " ";
	if(n<=1){
		cout << 0;
	}
	else cout << n/2;
	return 0;
}

