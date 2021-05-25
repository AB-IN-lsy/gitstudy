#include <bits/stdc++.h>
using namespace std;
const int maxn=100010;
struct Edge
{
    int u, v, next;
}edge[maxn<<2];
int head[maxn];
int cnt;
void add_edge(int u, int v)
{
    edge[cnt].u = u;
    edge[cnt].v = v;
    edge[cnt].next = head[u];
    head[u] = cnt++;
}

int n,m,t,x,y;
int flag;
bool vis[maxn];
int lk[maxn];
bool dfs(int u)
{
    for(int i=head[u];i!=-1;i=edge[i].next){
        int v=edge[i].v;
        if(!vis[v]){
            vis[v]=1;
            if(!lk[v] || (dfs(lk[v]))){
                lk[v]=u;
                return 1;
            }
        }
    }
    return 0;
}

int main()
{
    while(cin>>n>>m){
        memset(head,-1,sizeof(head));
        for(int i=1;i<=n;i++){
            cin>>t;
            while(t--){
                cin>>x;
                add_edge(i,x);
            }
        }
        memset(lk,0,sizeof(lk));
        int ans=0;
        for(int i=1;i<=n;i++){
            memset(vis,0,sizeof(vis));
            if(dfs(i))
                ans++;
        }
        cout<<ans<<endl;
    }

    return 0;
}
