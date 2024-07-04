#include <iostream>
using namespace std;

int main(){
	int a[8];
	for (int i = 0; i < 8; i++) {
		cin >> a[i];
	}
	int count = 0;
	if (a[0] < a[1] && a[1] < a[2] && a[2] < a[3] && a[3] < a[4] && a[4] < a[5] && a[5] < a[6] && a[6] < a[7]){
		cout << "TANG";
	} 
	else {
		if (a[0] > a[1] && a[1] > a[2] && a[2] > a[3] && a[3] > a[4] && a[4] > a[5] && a[5] > a[6] && a[6] > a[7]){
			cout << "GIAM";
		}
		else {
			cout << "KHONGBIET";
		}
	}
	return 0;
}