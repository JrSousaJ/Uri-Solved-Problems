#include<bits/stdc++.h>

using namespace std;
struct a
{
   int pq;
   double xx;
   bool operator < (a q)const
   {
      if(xx!=q.xx)return xx>q.xx;
      return pq<q.pq;
   }
};
int main()
{
    int cc=1;
    int n;
    while(~scanf("%d",&n))
    {
      a m[10];
      int c=0;
      for(int i=0;i<=9;i++)
      {
        double a;scanf("%lf",&m[i].xx);
        m[i].pq=i;
      }
      sort(m,m+10);
      printf("Caso %d: ",cc++);
      for(int i=0;i<n;i++)
      {
        printf("%d",m[i].pq);
      }
     
      printf("\n");
    }
   	return 0;
}
