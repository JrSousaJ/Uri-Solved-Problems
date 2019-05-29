#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    while(~scanf("%d %d",&n,&m))
    {
        if(!n && !m)break;
        int ans = (n*100) * (m*100);
        int larg;scanf("%d",&larg);
        int x;scanf("%d",&x);
        int val[x];
        for(int i=0;i<x;i++)
        {
            int a;scanf("%d",&a);
            val[i]=(a*100) * larg;
        }
        sort(val,val+x,greater<int>());
        int f=0,c=0;
        for(int i=0;i<x;i++)
        {
            if(ans <= 0)
            {
                f=1;
                break;
            }
            if(ans>= val[i])
            {
                ans-=val[i];
                c++;
            }
        }
        printf("%d\n",ans);
        if(f || !ans)printf("%d\n",c);
        else printf("impossivel\n");
    }
    return 0;
}
