#include<bits/stdc++.h>
using namespace std;
int n,m,p,minidade;
vector<vector<int> > v;
int vis[520],ida[520];
int dfs(int u)	
{
	vis[u] = 1;
	for(int i=0;i<v[u].size();i++)
	{
		int k = v[u][i];

		if(!vis[k])
		{
			minidade = min(minidade,ida[k]);
			dfs(k);
		}

	}
}
int main()
{
   memset(vis,0,sizeof vis);
   while(~scanf("%d %d %d",&n,&m,&p))
   {
   		v.assign(n+1,vector<int>());
	   for(int i=1;i<=n;i++)scanf("%d",&ida[i]);

	   for(int i=0;i<m;i++)
	   {
	   		int a,b;scanf("%d%d",&a,&b);
	   		v[b].push_back(a);
	   }
	   for (int i = 0; i < p; i++)
	   {
	   		char c;scanf(" %c",&c);
	   		if(c=='P')
	   		{
	   			int x;scanf("%d",&x);
	   			memset(vis,0,sizeof vis);

	   			minidade = 1000;
	   			//printf("%d fonfonfonf\n",minidade);
	   			dfs(x);
	   			if(minidade==1000)printf("*\n");
	   			else printf("%d\n",minidade);
	   		}
	   		else if(c=='T')
	   		{
	   			int a,b;scanf("%d %d",&a,&b);
	   			swap(v[a],v[b]);
	   			for(int i=1;i<=n;i++)
	   			{
	   				for(int l=0;l<v[i].size();l++)
	   				{
	   					if(v[i][l]==a)v[i][l]=b;
	   					else if(v[i][l]==b)v[i][l]=a;
	   				}
	   			}
	   		}
	   }
   }
   
   return 0;
}