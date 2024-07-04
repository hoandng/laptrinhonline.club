#include <bits/stdc++.h>

using namespace std;
typedef pair<double, double> diem;
#define x first
#define y second
int main() {
	diem A, B, C, D;
	cin >> A.x >> A.y;
	cin >> B.x >> B.y;
	cin >> C.x >> C.y;
	cin >> D.x >> D.y;
	double S = 0.5 * abs((A.x*B.y + B.x*C.y + C.x*D.y + D.x*A.y) - (A.y*B.x + B.y*C.x + C.y*D.x + D.y*A.x));
	cout << setprecision(2) << fixed << S;
	return 0;
}

