#include<bits/stdc++.h>

using namespace std;

int main()
{
  int n,n2;scanf("%d%d",&n,&n2);
  for(int i=0;i<n2;i++)
  {
      int n3;scanf("%d",&n3);
      if(n+n3>100) n=100;
      else if(n+n3<0) n=0;
      else
        n+=n3;
    
  }
  printf("%d\n",n);
  return 0;
}