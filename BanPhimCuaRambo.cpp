#include <iostream>
#include <string>

using namespace std;

int main() {
    string a;
    cin >> a;
    string b = "";
    for (char c : a) {
        if (c == '0' || c == '1') {
            b += c;
        } else if (c == 'B') {
            if (!b.empty()) {
                b.pop_back();
            }
        }
    }
    cout << b << endl;
    return 0;
}
