#include <iostream>
#include <vector>
#include <string>

using namespace std;

void TRY(vector<string> &result, string current, int open, int close, int n) {
    if (current.size() == 2 * n) {
        result.push_back(current);
        return;
    }

    if (open < n)
        TRY(result, current + "(", open + 1, close, n);
    if (close < open)
        TRY(result, current + ")", open, close + 1, n);
}

vector<string> listString(int n) {
    vector<string> result;
    TRY(result, "", 0, 0, n);
    return result;
}

int main() {
    int n;
    cin >> n;

    vector<string> list = listString(n);
    for (const string &s : list) {
        cout << s << "\n";
    }
    return 0;
}

