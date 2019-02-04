#include<bits/stdc++.h>

using namespace std;

int main()
{
   long long int n,n2;
   while(~scanf("%lld %lld",&n,&n2))
   {
        if(n==0 && n==n2)break;
        printf("%lld\n",n-(n2-n));
        //cout << n-(n2-n) << endl;
   }
   	return 0;
}
