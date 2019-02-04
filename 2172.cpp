#include<bits/stdc++.h>

using namespace std;


int main()
{
   int n,n2;
   int v,v2,v3;
   scanf("%d",&n);
   while(n--)
   {
        scanf("%d",&n2);
        int ans=0,ans2=0;
        
            scanf("%d%d%d",&v,&v2,&v3);
        if(v3%2==0)
            ans=((v+v2)/2)+n2;
        else
            ans=((v+v2)/2);

            scanf("%d%d%d",&v,&v2,&v3);
         if(v3%2==0)
            ans2=((v+v2)/2)+n2;
        else
            ans2=((v+v2)/2);
       
        if(ans>ans2)
            printf("Dabriel\n");
        else if(ans<ans2)
            printf("Guarte\n");
        else
            printf("Empate\n");
   }

    return 0;
}
