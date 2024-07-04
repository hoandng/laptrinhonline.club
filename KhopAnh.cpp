#include <iostream>
using namespace std;

int main(){
    int m, n;
    cin >> n >> m;
	char a[n][n], b[m][m];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < m; i++){
        for (int j = 0; j < m; j++){
            cin >> b[i][j];
        }
    }
    return 0;
}
