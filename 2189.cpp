#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n,c=1;
    while(~scanf("%d",&n),n)
    {
        int gan=-1,f=0;
        for(int i=1;i<=n;i++)
        {
          int x;scanf("%d",&x);
          if(x==i && !f)
          {
              gan=x;
              f=1;
          }
        }
        printf("Teste %d\n",c++);
        printf("%d\n\n",gan);
    }
   	return 0;
}
