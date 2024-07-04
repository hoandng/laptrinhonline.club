#include <bits/stdc++.h>

using namespace std;
int n, res=0;
map<char, int> M;
char d[]={'a','b','c'};
void TRY(string s, int k){
	if(k==n){
		int dem=0;
		for(int i = 1; i < n-1; i++){
			if(s[i]>s[i-1]&&s[i]>s[i+1])
			dem++;
		}
		res=max(res,dem); 
	}
	for(auto x:d){
		if(M[x]>0){
			M[x]-=1;
			TRY(s+x, k+1);
			M[x]++;
		}
	}
}
int main() {
	int na, nb, nc;
	cin >> na >> nb >> nc;
	M['a']=na;
	M['b']=nb;
	M['c']=nc;
	n = na+nb+nc;
	TRY("",0);
	cout << res;
	return 0;
}

