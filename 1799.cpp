#include<bits/stdc++.h>

using namespace std;
const int oo=0x3f3f3f3f;
map<string,int>mp;
int get(string u)
{
	if(!mp.count(u))mp[u]=mp.size()-1;

	return mp[u];
}
vector< vector<int> >g;
int main()
{
    
    int n,n2;cin >> n >> n2;
    int dist[n];
    memset(dist,oo,sizeof dist);
    g.assign(n,vector<int>());
    string s,s1;
    while(n2--)
    {
    	cin >> s >> s1;
    	g[get(s)].push_back(get(s1));
    	g[get(s1)].push_back(get(s));
    }
    int quei=mp["*"];
    int entr=mp["Entrada"];
    int said=mp["Saida"];
    dist[quei]=0;
    queue<int>fila;
    fila.push(quei);
    int ans=0;
	while(!fila.empty())
    {
    	int u=fila.front();
    	fila.pop();
    	for(int i=0;i<g[u].size();i++)
    	{
    		int aff=g[u][i];
    		if(dist[aff]==oo)
    		{
    			dist[aff]=dist[u]+1;
    			fila.push(aff);
    		}
    	}
    }
    ans=dist[entr]+dist[said];
    cout << ans << endl;

   	return 0;
}
