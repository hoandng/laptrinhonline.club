#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	double l[n], r[n];
	for (int i = 0; i < n; i++) {
		cin >> l[i] >> r[i];
	}
	double sum = l[0] * r[0];
	double max = l[0] * r[0];
	for (int i = 1; i < n; i++) {
		double dt = l[i] * r[i];
		sum += dt;
		max = max < dt ? dt : max;
	}
	cout << setprecision(3) << fixed << sum/n << endl;
	cout << setprecision(3) << fixed << max;
	return 0;
}

