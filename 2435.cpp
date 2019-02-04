#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	double a=1;
   int n,n2,n3;scanf("%d%d%d",&n,&n2,&n3);
   int n4,n5,n6;scanf("%d%d%d",&n4,&n5,&n6);
   double ans=a*n2/n3;
   double ans2=a*n5/n6;
   if(ans<ans2)
        printf("%d\n",n);
    else
        printf("%d\n",n4);

    return 0;
}