#include<bits/stdc++.h>

using namespace std;

int main()
{
    
    int n;
    while(scanf("%d",&n),n!=0)
    {
        long long int q=0;
        for(int i=1;i<=n;i++)q+=i*i;
        printf("%lld\n",q);
    }
   	return 0;
}
