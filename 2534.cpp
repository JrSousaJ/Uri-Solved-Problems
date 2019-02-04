#include<bits/stdc++.h>

using namespace std;


int main()
{
    int n,n2;
    int v[200];
    while(scanf("%d%d",&n,&n2)!=EOF)
    {
        for(int i=0;i<n;i++)
       {
            scanf("%d",&v[i]);
       }
       int q;
       sort(v,v+n);
       while(n2--)
       {
            scanf("%d",&q);
            printf("%d\n",v[n-q]);
       }
    }

   
    
   
    


    return 0;
}
