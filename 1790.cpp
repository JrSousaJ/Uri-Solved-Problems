#include<bits/stdc++.h>

using namespace std;
int k,a;
vector<vector<int> > v;
int vis[50];
void dfs(int x)
{
	vis[x] = 1;

	for (int i=0;i<v[x].size();i++)
	{
		int u = v[x][i];
		if(!vis[u])
		{
			dfs(u);
		}
		else if(vis[u]==1)
		{
			vis[u] == 3;
			return ;
		}
	}
	vis[x] = 2;
}
int main()
{

	while(~scanf("%d %d",&k,&a))
	{
		v.assign(k+1,vector<int>());
		memset(vis,0, sizeof vis);
		for(int i=0;i<a;i++)
		{
			int x,y;scanf("%d%d",&x,&y);
			v[x].push_back(y);
		}
		for(int i=0;i<k;i++)
		{
			if(!vis[i])
			{
				dfs(i);
			}
		}
		int c=0;
		for(int i=0;i<k;i++)
		{
			if(vis[i]==1 || vis[i]==2)
				c++;
		}
		printf("%d\n",c);
	}	

	return 0;
}