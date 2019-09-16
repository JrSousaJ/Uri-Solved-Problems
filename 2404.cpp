#include<bits/stdc++.h>

using namespace std;
struct grafin{
   int a,b,w;
   bool operator<(const grafin&x)
   {
      return w < x.w;
   }
};
vector<grafin>g;
int p[507];
int findset(int a)
{
   if(p[a]==a)return p[a];
   return p[a]=findset(p[a]);
}
void unionset(int a,int b)
{
   int x = findset(a);
   int y = findset(b);
   p[y]=x;
}
int main()
{
   int n,m;
   scanf("%d %d",&n,&m);
   for(int i=0;i<m;i++)
   {
      int a,b,w;
      scanf("%d %d %d",&a,&b,&w);
      g.push_back({a,b,w});
   }
   for(int i=0;i<507;i++)p[i]=i;

   int ans=0;
   sort(g.begin(),g.end());
   for(int i=0;i<g.size();i++)
   {
      int a = g[i].a;
      int b = g[i].b;
      int w = g[i].w;
      if(findset(a)!=findset(b))
      {
         unionset(a,b);
         ans+=w;
      }
   }
   printf("%d\n",ans);
   
    return 0;
}