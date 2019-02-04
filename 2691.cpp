#include<bits/stdc++.h>

using namespace std;


int main()
{
   int n;
   int n2,n3;
   scanf("%d",&n);
   while(n--)
   {
      scanf("%dx%d",&n2,&n3);

      for(int i=5;i<=10;i++)
      {
          if(n2!=n3)
          {
               printf("%d x %d = %d && %d x %d = %d\n",n2,i,n2*i,n3,i,n3*i);
          }
          else
             printf("%d x %d = %d\n",n2,i,n2*i);
        
      }
   }


   
	return 0;
}
