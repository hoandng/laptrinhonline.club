#include <bits/stdc++.h>

using namespace std;

int main() {
	map<int,int> A;
	int n,x;
	cin >> n;
	while(n--){
		cin >> x;
		A[x]++;
		auto it=A.lower_bound(x);
		if(it==A.begin()) cout << 0 << endl;
		else{
			it--;
			cout << it->first << " " << it->second<<endl;
		}
	}
	return 0;
}

