#include <bits/stdc++.h>
using namespace std;
int a[1000001],n;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=(i/2);j++){
            a[i]=a[i]+a[j];
        }
        a[i]++;
    }
    cout<<a[n];
    return 0;
}
