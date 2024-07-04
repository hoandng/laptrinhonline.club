#include <bits/stdc++.h>

using namespace std;
map<int,bool> C,P,A;
int d=0;
void TRY(int *x, int k, int n){
    if(k-1==n){
        ++d;
        return;
    }
    for (int t=1; t<=n; t++){
        if((k-t)!=0 && (k+t)!=(n+1) && A[t]==0 && C[k-t]==0 && P[k+t]==0){
            A[t] = C[k-t] = P[k+t] = 1;
            x[k]=t;
            TRY(x,k+1,n);
            A[t]=C[k-t]=P[k+t]=0;
        }
    }
}
int main(){
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int  n, x[100];
    cin >> n;
    TRY(x,1,n);
    cout << d;
    return 0;
}
