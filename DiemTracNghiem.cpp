#include <bits/stdc++.h>

using namespace std;

int main() {
	string q,a;
	cin >> q >> a;
	int t=0;
	for(int i = 0; i <a.size(); i++){
		if(a[i]==q[i])
			t++;
	}
	int n = q.size();
	cout <<setprecision(2) << (float)t/n*10;
	return 0;
}

