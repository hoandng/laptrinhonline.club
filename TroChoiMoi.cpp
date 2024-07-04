#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, sum=0,t=-1e9,c=-1;
	cin >> n;
	int a[n];
	
	for(int &x:a){
		cin >> x;
		sum+=x;
	} 
	for(int &x:a){
		x=x==0?1:-1;
		c=max(c,0)+x;
		t=max(t,c);
	} 
	cout << sum+t;
	return 0;
}

