#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,num;
    cin>>n>>m;
    queue<int>q;
    for(int i=1;i<=n;i++){
        q.push(i);
    }
    num=0;
    while(q.size()>1){
        num++;
        int tmp=q.front();
        q.pop();
        if(num%m!=0)//只要是m的倍数就行
            q.push(tmp);
    }
    cout<<q.front();
    return 0;
}
