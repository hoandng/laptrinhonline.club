#include <iostream>
#include <cmath>

using namespace std;

int main() {
	long long n;
	cin >> n;
	long long pt = 0, i = 0;
	while (pt < n) {
		i++;
		pt = pow(2, i);
	}
	cout << i;
	return 0;
}

