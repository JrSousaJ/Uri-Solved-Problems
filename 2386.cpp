#include<bits/stdc++.h>

using namespace std;
#define ll long long int
int main()
{
	ll n;scanf("%lld",&n);
	int n2;scanf("%d",&n2);
	int c=0;
	while(n2--)
	{
		ll m;scanf("%lld",&m);
		if(m*n>=40000000)
			c++;
	}
	printf("%d\n",c);
	return 0;
}