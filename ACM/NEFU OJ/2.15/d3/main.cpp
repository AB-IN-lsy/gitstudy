#include <bits/stdc++.h>

using namespace std;
priority_queue<int,vector<int>,greater<int> >q;//此处要加空格

int main()
{
    int n,x;
    while(cin>>n){
    for(int i=1;i<=n;i++){
        cin>>x;
        q.push(x);
    }
    while(q.size()>1){
        int tmp1,tmp2,tmp;
        tmp1=q.top();
        q.pop();
        tmp2=q.top();
        q.pop();
        tmp=tmp1+tmp2;
        cout<<tmp<<" ";
        q.push(tmp);
    }
    cout<<endl;
    q.pop();
}

    return 0;
}
