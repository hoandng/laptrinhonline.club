#include <iostream>
#include <string>

using namespace std;

int count_OAO_substrings(string s) {
    int count = 0;
    int n = s.length();

    for (int i = 0; i < n; ++i) {
        if (s[i] == 'A') {
            int left = i - 1, right = i + 1;
            while (left >= 0 && right < n && s[left] == 'O' && s[right] == 'O') {
                count++;
                left--;
                right++;
            }
        }
    }

    return count;
}

int main() {
    string s;
    cin >> s;

    int result = count_OAO_substrings(s);
    cout << result << endl;

    return 0;
}

