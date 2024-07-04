#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool isValid(const string &s) {
    int balance = 0;
    for (char c : s) {
        if (c == '(') {
            balance++;
        } else if (c == ')') {
            balance--;
            if (balance < 0) return false;
        }
    }
    return balance == 0;
}

void TRY(string current, int openCount, int closeCount, int n) {
    if (openCount == n && closeCount == n) {
        if (!isValid(current)) {
            cout << current << "\n";
        	return;
        }
    }

    if (openCount < n) {
        TRY(current + "(", openCount + 1, closeCount, n);
    }
    if (closeCount < n) {
        TRY(current + ")", openCount, closeCount + 1, n);
    }
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n;
    cin >> n;
    TRY("", 0, 0, n);
    return 0;
}

