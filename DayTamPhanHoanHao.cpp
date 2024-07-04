#include"bits/stdc++.h"
using namespace std;
int n;
int a[1001];
void output(){
	for(int i = 0; i<n;i++){
		cout<<a[i];
	}
	cout<<"\n";
}
void TRY(int i,int d0,int d1,int d2){
	 if (i==n) {
        for(int i = 0; i<n;i++){
			cout<<a[i];
		}
		cout<<"\n";
		return;
    }
    for (int j=0;j<3;j++) {
        if ((j==0&&d0<(n/3))||(j==1&&d1<(n/3))||(j==2&&d2<(n/3))) {
            a[i] = j;
            if(j==0) TRY(i+1,d0+1,d1,d2);
            if(j==1) TRY(i+1,d0,d1+1,d2);
            if(j==2) TRY(i+1,d0,d1,d2+1);
        }
    }
}
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
	cin>>n;
	if(n%3!=0){
		cout<<"-1";
	}else{
		TRY(0,0,0,0);
	}
}
