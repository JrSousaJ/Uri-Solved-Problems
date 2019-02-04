#include<bits/stdc++.h>

using namespace std;
int pd[50];
int main()
{
    int n,n2;
    while(~scanf("%d%d",&n,&n2))
    {
        int q[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&q[i]);
        }
        sort(q,q+n,greater<int>());
        int tot=0;
       for(int i=0;i<n2;i++)
        {
            tot+=q[i];
        }
        printf("%d\n",tot);
    }

    return 0;

}