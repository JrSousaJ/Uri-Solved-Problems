#include<bits/stdc++.h>

using namespace std;
const int oo=0x3f3f3f3f;
vector<vector<int> > g;
int main()
{
    int n;
    while(cin >> n && n!=0)
    {
        g.assign(n*2,vector<int>());
        vector<int>v;
        int dis[200];memset(dis,oo,sizeof dis);
        for(int i=0;i<n;i++)
        {
            char q[100000];
            int x;cin >> x;
           
            scanf(" %[^\n]",q);
           char *p=strtok(q," ");
            vector<int>v;
            while(p!=0)
            {
                 char q2[10006];
                 sscanf(p," %s",q2);
                 p=strtok(NULL," ");
                 g[x].push_back(atoi(q2));
                 v.push_back(atoi(q2));
            }

             for(int j=0;j<v.size();j++)
            {
                g[x].push_back(v[j]);
                g[v[j]].push_back(x);
            }
        }
       queue<int>fila;
        fila.push(1);
        dis[1]=0;
        int flag=1;
        while(!fila.empty())
        {
            int u=fila.front();
            fila.pop();
            for(int i=0;i<g[u].size();i++)
            {
                int aff=g[u][i];
                if(dis[aff]==oo)
                {
                    dis[aff]=dis[u]+1;
                    fila.push(aff);
                }
                else if(aff && dis[aff]==dis[u])flag=0;
            }
        }
        if(flag)printf("SIM\n");
        else printf("NAO\n");
     
    }
   	return 0;
}
