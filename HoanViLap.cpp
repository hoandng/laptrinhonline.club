#include <bits/stdc++.h>

using namespace std;
int n;
map<char,int> F;
void TRY(string x){
    if(x.size()==n){
        cout << x << endl;
        return ;  
    } 
    for(auto &f:F){
        if(f.second > 0){
            f.second--;
            TRY(x+f.first);
            f.second++;
        }
    }
}
int main(){
    string s;
    cin >> s;
    n = s.size();
    for(auto c:s) F[c]++;
    TRY("");
    return 0;
}