#include<bits/stdc++.h>

using namespace std;


int main()
{
    int n;
    double n2,ans=0,ans2=0;
    int cc=0;
    char  aeae[100000];
    int nf;
    scanf("%d",&n);
    int aux[400];
    for(int i=0;i<n;i++)
    {
      scanf("%lf",&n2);
      ans+=n2;
      scanf(" %[^\n]",aeae);
      char *p =strtok(aeae, " ");
      while(p!=0)
      {
        p=strtok(NULL, " ");
        cc++;
      }
      aux[i]=cc;
      nf+=cc;
      cc=0;

    }
    for(int i=1;i<=n;i++)
    {
      printf("day %d: %d kg\n",i,aux[i-1]);
    }
    printf("%.2lf kg by day\n",(double)nf/n);
    printf("R$ %.2lf by day\n",ans/n);
    return 0;
}
