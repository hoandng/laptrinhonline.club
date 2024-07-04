#include <bits/stdc++.h>
using namespace std;
#define pii pair<int,int>
int n, m, res = 0;
pii a,b;
pii d[]={{2,1},{2,-1},{-2,1},{-2,-1},{1,2},{1,-2},{-1,2},{-1,-2}};
void BFS(){
    queue<pii> Q;
    map<pii, int> M;
    Q.push(a);
    M[a] = 1;
    while(!Q.empty() && M.find(b) == M.end()){
        pii p = Q.front();
        Q.pop();
        for(auto x : d){
            int u = p.first + x.first;
            int v = p.second + x.second;
            if(M.find({u,v}) == M.end()&&M[{u,v}]==0&&u>0 && u<=n && v>0 && v<=m){
                Q.push({u,v});
                M[{u,v}] = M[p] + 1;
            }
        }
    }
    cout << M[b]-1;
}

int main(){
    cin >> n >> m;
    cin >> a.first >> a.second;
    cin >> b.first >> b.second;
    BFS();
    return 0;
}
