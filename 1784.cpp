#include<bits/stdc++.h>

using namespace std;
int t;
int n;
const int oo= 0x3f3f3f3f;
int c[10],p[10];
int dp[10][1<<10];
int mmc(int a,int b)
{
	return (a*b)/__gcd(a,b);
}
int pd(int jaburu, int mask)
{
	if(__builtin_popcount(mask) == n) return 0;
 
	if(dp[jaburu][mask] != -1) return dp[jaburu][mask];
 
	int ans = oo;
 
	for(int i = 0 ; i < n ; i++)
	{
		if(mask >> i & 1) continue;
 
		ans = min(ans, max(pd(jaburu+1, mask | 1 << i), mmc(p[jaburu], c[i])));
	}
 
	return dp[jaburu][mask] = ans;	
}

int main()
{
	scanf("%d",&t);
	for(int k=1;k<=t;k++)
	{
		memset(dp,-1,sizeof dp);
		scanf("%d",&n);
		for(int i=0;i<n;i++)scanf("%d", c+i);
		for(int i=0;i<n;i++)scanf("%d",p+i);

		printf("Caso #%d: %d\n",k,pd(0,0));
	}
   	return 0;
}
