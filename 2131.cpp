#include<bits/stdc++.h>

using namespace std;
vector<vector<int > > g;
int main()
{
	int n,n2;
	int k=1;
	while(cin >> n >> n2)
	{
		g.assign(n+1,vector<int>());
		for(int i=0;i<n2;i++)
		{
			int x,y;cin >> x >> y;
			g[x].push_back(y);
			g[y].push_back(x);
		}
		int cor[n+1];memset(cor,-1,sizeof cor);
		queue<int>fila;fila.push(1);
		cor[1]=0;
		int flag=1;
		while(!fila.empty())
		{
			int u=fila.front();
			fila.pop();
			for(int i=0;i<g[u].size();i++)
			{
				int v=g[u][i];
				if(cor[v]==-1)
				{
					cor[v]=1-cor[u];
					fila.push(v);
				}
				else if(cor[v]==cor[u])flag=0;
			}
		}
		printf("Instancia %d\n",k++);
		if(flag)printf("sim\n\n");
		else printf("nao\n\n");
	}
	
   	return 0;
}
