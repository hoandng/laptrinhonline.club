#include <bits/stdc++.h>

using namespace std;

int main(){
    int x, a=0, b=0, c=0;
    cin >> x;
    a = x / 10;
    x -= 10*a;
    b = x / 5;
    x -= 5*b;
    c = x;
    for (int i = 1; i <= a; i++){
        cout << "X";
    }
    for (int i = 1; i <= b; i++){
        cout << "V";
    }
    for (int i = 1; i <= c; i++){
        cout << "I";
    }
    return 0;
}