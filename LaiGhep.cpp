#include <bits/stdc++.h>

using namespace std;
int n;
string A,B;
void TRY(string x){
    if(x.length()==n){
        cout << x << endl;
        return;
    }
    TRY(x+A[x.length()]);
    if(A[x.length()]!=B[x.size()]) TRY(x+B[x.size()]);
}
int main(){
    cin>>A>>B;
    n=A.size();
    for(int i=0;i<n; i++)
    if(A[i]>B[i]) swap(A[i], B[i]);
    TRY("");
    return 0;
}