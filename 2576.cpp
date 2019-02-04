#include<bits/stdc++.h>

const int oo = 0x3f3f3f3f;
using namespace std;
vector<vector<pair<int,int > > > g;
int n,m,ini,fim;
int dist[100005];
int dij(int u,int d)
{
	memset(dist,oo,sizeof dist);
	dist[u]=0;
	priority_queue<pair<int,int> > fila;
	fila.push(make_pair(0,u));

	while(!fila.empty())
	{
		int z=fila.top().second;
		int w = -fila.top().first;
	

		fila.pop();
		if(dist[z]!=w) continue;
		for(int i=0;i<(int)g[z].size();i++)
		{
			int v = g[z][i].first;
			int cust=g[z][i].second;

			if(dist[v] > dist[z]+cust)
			{
				dist[v]= dist[z]+cust;
				fila.push(make_pair(-dist[v],v));
			}
		}
	
	}
	return dist[d];
	
}
int main()
{
	//<distancia,vertice>
	cin >>n >> m >> ini >> fim;
	g.assign(n+1, vector<pair<int,int> > ());

	for(int i=0;i<m;i++)
	{
		int a,b;
		cin >> a >> b ;
		g[a].push_back(make_pair(b,0));
		g[b].push_back(make_pair(a,1));
	}
	int ans1= dij(ini,fim);
	int ans2= dij(fim,ini);
	if(ans1<ans2) printf("Bibi: %d\n",ans1);
	else if(ans2<ans1) printf("Bibika: %d\n",ans2);
	else
		printf("Bibibibika\n");
	
	return 0;
}