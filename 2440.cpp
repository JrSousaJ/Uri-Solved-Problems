#include<bits/stdc++.h>

using namespace std;
vector<vector<int> > g;
int vis[50000];
void dfs(int u)
{
	vis[u]=1;
	for(int i=0;i<g[u].size();i++)
	{
		int q=g[u][i];
		if(vis[q]==0)
		{
			dfs(q);
		}
	}
}
int main()
{
	int n,n2,ans=0;scanf("%d%d",&n,&n2);
	g.assign(n+1,vector<int>());
	memset(vis,0,sizeof vis);
	for(int i=0;i<n2;i++)
	{
		int x,x2;scanf("%d%d",&x,&x2);
		g[x].push_back(x2);
		g[x2].push_back(x);
	}
	for(int i=1;i<=n;i++)
	{
		if(vis[i]==0)
		{
			ans++;
			dfs(i);
		}
	}
	printf("%d\n",ans);
   	return 0;
}
