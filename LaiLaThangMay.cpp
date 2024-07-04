#include <bits/stdc++.h>

using namespace std;
int  n,k,s,f;
int a[1000];
void BFS(){
	int d[n+5]={};
	queue<int> q;
	q.push(s);
	d[s]=1;
	while(q.size() && d[f] == 0){
		int u = q.front(); q.pop();
        for(int i=0; i<k; i++)
		{
            int m = u + a[i];
			if(1<=m && m <=n && d[m]==0){
				d[m]=d[u]+1;
				q.push(m);
			}
		}
	}
	cout << d[f]-1;
}
int main() {
	cin >> n >> k;
    for(int i=0; i<k; i++){
        cin >> a[i];
    }
	cin >> s >> f;
	BFS();
	return 0;
}

