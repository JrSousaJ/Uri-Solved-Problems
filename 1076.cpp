#include<bits/stdc++.h>

using namespace std;
const int oo=0x3f3f3f3f;
vector<vector<int> > g;
int vis[1000];
int cc=0;
set<int>valores;
void dfs(int u)
{
    vis[u]=1;
    for(int i=0;i<g[u].size();i++)
    {
        int q=g[u][i];
        if(vis[q]==0)
        {
            dfs(q);
            cc++;
        }
    }

}
int main()
{
    int n;cin >> n;
    while(n--)
    {
        memset(vis,0,sizeof vis);
        int ini;cin >> ini;
        int v,a;cin >> v >> a;
        g.assign(v,vector<int>());
        for(int i=0;i<a;i++)
        {
            int x,y;cin >> x >> y;
            valores.insert(x);
            valores.insert(y);
            g[x].push_back(y);
            g[y].push_back(x);
        }
        if(valores.find(ini)!=valores.end())dfs(ini);
        else cc=0;
        printf("%d\n",cc*2);
        valores.clear();
        cc=0;
    }
   	return 0;
}
