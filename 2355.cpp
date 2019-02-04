#include<bits/stdc++.h>

using namespace std;
#define ll long long int
int main()
{
	double n,n2;
	while(scanf("%lf",&n),n!=0)
	{
		double b=n/90;
		ll b2=floor(b*1);
		ll a2=ceil(b*7);
		printf("Brasil %lld x Alemanha %lld\n",b2,a2);
	}

	return 0;
}