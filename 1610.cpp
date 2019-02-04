#include<bits/stdc++.h>

using namespace std;
int cor[10002];
vector<vector<int > > g;
bool aa=false;
void dfs(int u)
{
    cor[u]=1;
    for(int i=0;i<g[u].size();i++)
    {
    	int v=g[u][i];
    	if(cor[v]==0)
    	{
    		dfs(v);
    	}
    	
    	else if(cor[v]==1)
    	{
    		aa=true;
    		return ;
    	}
    }
    cor[u]=2;
}
int main()
{
    int n;scanf("%d",&n);
   	while(n--)
   	{
   		int n2,n3;cin >> n2 >> n3;
   		memset(cor,0,sizeof cor);
   		g.assign(n2+1,vector<int>());
   		aa=false;
   		for(int i=0;i<n3;i++)
   		{
   			int x,y;cin >> x >> y;
   			g[x].push_back(y);
   		}
   		for(int i=0;i<n2;i++)
   		{
   			if(cor[i]==0)
   			{
   				dfs(i);
   			}
   		}
   		(aa) ? printf("SIM\n") :printf("NAO\n");
   	}

    return 0;
}
