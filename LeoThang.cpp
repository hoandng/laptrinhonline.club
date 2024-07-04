
#include <bits/stdc++.h>

using namespace std;
int d = 0;
void TRY(int T, int n){
	if(T==n){
		d++;
		return;
	}
	for(int i = 1; i <= 3; i++)
	if(T+i<=n) TRY(T+i, n);
}
int main() {
	int n;
	cin >> n;
	TRY(0,n);
	cout << d;
	return 0;
}

