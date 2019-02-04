#include<bits/stdc++.h>

using namespace std;


int main()
{
    int n;
    long long int n2;
    int r;
    
    scanf("%d",&n);
    while(n--)
    {
      int primo=1;
      scanf("%lld",&n2);
      r=sqrt(n2);
      for(int i=3;i<=r;i+=2)
      {
        if(n2%2==0)
        {
          primo=0;
          break;
        }
        if(n2%i==0)
        {
          primo=0;
          break;
        }
      }
      if(primo==1)
        printf("Prime\n");
      else
        printf("Not Prime\n");

    }



    return 0;
}
