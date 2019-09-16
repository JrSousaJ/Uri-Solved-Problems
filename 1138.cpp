#include<bits/stdc++.h>

using namespace std;
#define ll long long

ll dp[20][180][2];
ll v[9];

int main()
{
	ll n,m;
	while(~scanf("%lld%lld",&n,&m))
	{
		if(!n && !m)
			break;
		memset(dp,-1,sizeof dp);
		memset(v,0,sizeof v);
	}
	return 0;
}