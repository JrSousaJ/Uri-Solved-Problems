#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	   int n,n2;
     while(scanf("%d%d",&n,&n2),n!=0 && n2!=0)
     {
          int v[n],v2[n2];
          for(int i=0;i<n;i++)
          {
            scanf("%d",&v[i]);
          }
          for(int i=0;i<n2;i++)
          {
            scanf("%d",&v2[i]);
          }
          sort(v2,v2+n2);
          bool q=true;
         
          for(int i=0;i<n;i++)
          {
            if(v[i]<v2[1])
                q=false;
          }
          if(q==false)
            printf("Y\n");
          else
            printf("N\n");
     }
    return 0;
}