#include <bits/stdc++.h>
     
using namespace std;
const int N=40005;
int p[N];
struct aresta
{
    int a,b,w;
 
    bool operator < (const aresta&q )const
    {
        return w < q.w;
    }
};
 
int findset(int u)
{
    if(u == p[u])
        return u;
 
    return p[u]=findset(p[u]);
}
 
void unionset(int a, int b)
{
    int x = findset(a);
    int y = findset(b);
 
    p[y] = x;
}
int n,m;
vector<aresta> g;
     
int main()
{
    while(scanf("%d%d",&n,&m),n!=0 && m!=0)
    {
        g.clear();
        for(int i=0;i<n;i++)p[i]=i;
        for(int i=0;i<m;i++)
        {
            int a,b,w;scanf("%d%d%d",&a,&b,&w);
            g.push_back({a,b,w});
        }   
        sort(g.begin(),g.end());
        int mst=0;
        for(int i=0;i<(int)g.size();i++)
        {
            int a=g[i].a;
            int b=g[i].b;
            int w=g[i].w;
            if(findset(a)!=findset(b))
            {
                unionset(a,b);
                mst+=w;
            }
        }
        printf("%d\n",mst);
    }   
   	return 0;
}