#include "bits/stdc++.h"
using namespace std;

main()
{
    long m,n,L,R;
    cin >> n >> m;
    long a[n+5]={};
    for(int i=1;i<=n;i++) {cin >> a[i];a[i]+=a[i-1];}
    while (m--)
    {
        cin >> L >> R;
        cout << a[R] -a[L-1] << "\n";
    }
    
    return 0;
}
