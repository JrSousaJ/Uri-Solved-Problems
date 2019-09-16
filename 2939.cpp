#include<bits/stdc++.h>

using namespace std;
const long long mod=1e9+7;
long long dp[1000005];
int cc=0;
long long pd(int x){
	cc++;
	if(x<=0)return 0;
	if(x<=2)return x;	
	if(dp[x]!=-1)return dp[x];
	long long fa = 1, dois = 1;
	for(int i=1;i<=x;i++){
		fa= ((fa%mod) * (i%mod))%mod;
	}
	for(int i=1;i<=x;i++){
		dois= ((dois%mod) * 2)%mod;
	}
	return dp[x]=(((((pd(x-1) + pd(x-2))%mod)*fa)%mod) * dois)%mod; 
}

int main()
{
	long long n;scanf("%lld",&n);
	memset(dp,-1,sizeof dp);
	printf("%lld\n",pd(n));
	printf("%d\n",cc);
	return 0;
}