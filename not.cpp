#include<bits/stdc++.h>

using namespace std;

vector<char>comp;
vector<vector<int> > graph;
int vis[27];
void dfs(int u)
{
    comp.push_back(u + 'a');
    vis[u]=1;
    for(int i=0;i<graph[u].size();i++)
    {
        int q=graph[u][i];
        if(vis[q]==0)
        {
            dfs(q);
        }
    }

}

char a,b;

int main()
{
    int n;cin >> n;
    graph.assign(27,vector<int>());
    int k = 1;
    while(n--)
    {
        int x,y;cin >> x >> y;
        for(int i=0;i<y;i++)
        {
            cin >> a >> b;
            graph[a-'a'].push_back(b-'a');
            graph[b-'a'].push_back(a-'a');
        }
        int ans=0;
        printf("Case #%d:\n",k++);
        for(int i=0;i<x;i++)
        {
            if(vis[i]==0)
            {
                ans++;
                dfs(i);
                sort(comp.begin(),comp.end());
                for(int j=0;j<comp.size();j++)
                {
                    cout << comp[j] << ",";
                }
                printf("\n");
                comp.clear();
            }
        }
        printf("%d connected components\n\n",ans);
    }
    return 0;
}



