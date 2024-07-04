#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int A, B, C, D;
    cin >> A >> B >> C >> D;
    if (B < C || A > D) {
        cout << "0";
    }
    else {
        if (A <= C && D <= B) {
            cout << D - C;
        }
        else {
            if (C <= A && B <= D) {
                cout << B - A;
            }
            else {
                if (A <= C && B <= D) {
                    cout << B - C;
                }
                else {
                    cout << D - A;
                }
            }
        }
    }
    return 0;
}