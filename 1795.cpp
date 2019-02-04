#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;cin >>n;
    long long int v[21];
    v[0]=1;
   	for(int i=1;i<=20;i++)
   	{
   		v[i]=(v[i-1]*3);
   	}
   	printf("%lld\n",v[n]);
   	return 0;
}
