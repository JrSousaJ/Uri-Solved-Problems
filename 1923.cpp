#include<bits/stdc++.h>

using namespace std;
const int oo = 0x3f3f3f3f;

int n,grau;
map<string,int>mp;
map<int,string>mpr;
vector<vector<int> > g;
int get(string x)
{
	if(!mp.count(x))
		mp[x]=mp.size()-1;

	mpr[mp[x]]=x;
	return mp[x];
}
int main()
{
	scanf("%d%d",&n,&grau);
	g.assign(2*n,vector<int>());
	for(int i=0;i<n;i++)
	{
		string a,b;cin >> a >> b;
		int aa = get(a);
		int bb= get(b);
		g[aa].push_back(bb);
		g[bb].push_back(aa);
	}
	int x= mp["Rerisson"];
	int dist[n*2];memset(dist,oo,sizeof dist);
	dist[x]=0;
	queue<int>fila;
	fila.push(x);
	vector<string>ans;
	while(!fila.empty())
	{
		int u = fila.front();
		fila.pop();
		for(int i = 0 ; i < (int)g[u].size(); i++)
		{
			int v = g[u][i];
			if(dist[v] == oo)
			{
				dist[v] = dist[u] + 1;
				if(dist[v] <= grau) ans.push_back(mpr[v]);
				fila.push(v);
			}
		}
	}
	sort(ans.begin(),ans.end());
	printf("%d\n",(int)ans.size());
	for(int i=0;i<ans.size();i++)
	{
		cout << ans[i] << endl;
	}
	return 0;
}