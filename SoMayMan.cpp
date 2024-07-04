#include <bits/stdc++.h>

using namespace std;
int n;
vector<int> res;
void BFS(){
	queue<long long> Q;
	Q.push(1);
	Q.push(2);
	Q.push(5);
	bool check = false;
	while(Q.front() < 999999999){
		long long u = Q.front();
	  	Q.pop();
	  	if(u % n == 0) cout << u << "\n";
	  	if(!check)
	  		for(auto x : {0,1,2,5}){
	  			if(u*10+x > 999999999 ){
	    		check = true;
	    	}
	   			Q.push(u*10+x);
		}
	}
}
int main() {
	cin >> n;
	BFS();
	return 0;
}

