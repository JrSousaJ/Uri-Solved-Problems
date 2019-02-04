#include<bits/stdc++.h>

using namespace std;
const int oo=0x3f3f3f3f;
vector<vector<pair<int,int> > > g;
int cc;
int grafin[510][510];
int n,n2;
int dij(int ini)
{
	int dist[510];memset(dist,oo,sizeof dist);
	dist[ini]=0;
	priority_queue<pair<int,int> > fila;
	fila.push(make_pair(0,ini));
	while(!fila.empty())
	{
		int u=fila.top().second;
		int w=-fila.top().first;
		fila.pop();
		if(dist[u]!=w)continue;

		for(int i=0;i<g[u].size();i++)
		{
			int x=g[u][i].first;
			int cc=g[u][i].second;
			if(dist[x]>dist[u]+cc)
			{

				dist[x]=dist[u]+cc;
				//printf("%d %d\n",dist[x],x);
				fila.push(make_pair(-dist[x],x));
			}
		}
	}
	return dist[cc];
}
int main()
{
	
	while(~scanf("%d%d",&n,&n2))
	{
		if(!n && !n2)break;
		g.assign(n+1,vector<pair<int,int> >());
		memset(grafin,oo,sizeof grafin);
		for(int i=0;i<n2;i++)
		{
			int a,b,w;scanf("%d%d%d",&a,&b,&w);
			if(grafin[b][a]!=oo)
			{
				g[a].push_back(make_pair(b,0));
				g[b].push_back(make_pair(a,0));
			}
			else g[a].push_back(make_pair(b,w));
			grafin[a][b]=w;
		}
		int x;scanf("%d",&x);
		int ant=0;
		

		while(x--)
		{
			int bb;scanf("%d%d",&bb,&cc);
			int ans=dij(bb);
			
			if(ans==oo)printf("Nao e possivel entregar a carta\n");
			else printf("%d\n",ans);
		}
		printf("\n");
	}
	return 0;
}