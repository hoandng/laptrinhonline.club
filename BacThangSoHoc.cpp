#include <iostream>
#include <cmath>

using namespace std;

int main() {
   	long n;
    cin >> n;
    long row = ceil((-1.0 + sqrt(1 + 8 * n)) / 2);
    long value = n - row * (row - 1) / 2;
    cout << value;
    return 0;
}

