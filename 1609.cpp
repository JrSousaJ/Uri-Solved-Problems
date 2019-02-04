#include<bits/stdc++.h>

const int oo = 0x3f3f3f3f;
using namespace std;
#define ll long long int




int main()
{
	ll n;scanf("%lld",&n);
	set<int>a;
	while(n--)
	{
		ll n2;scanf("%lld",&n2);
		for(int i=0;i<n2;i++)
		{
			ll n3;scanf("%lld",&n3);
			a.insert(n3);
		}
		int q=a.size();
		printf("%d\n",q);
		a.clear();
	}

	return 0;
}