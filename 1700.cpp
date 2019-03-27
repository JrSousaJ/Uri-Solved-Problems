#include<bits/stdc++.h>

using namespace std;
const int N = 1e5+5;
const int oo = 0x3f3f3f3f;
int val[N];
int dp[2][N];
int mid, tot, n;
int pd(int pos, int meio)
{
	if(pos == n && meio == mid)return 0;
	if(pos == n)return -oo;
	if(dp[pos][meio] != -1)return dp[pos][meio];

	int ans = pd(pos+1, meio);

	if(meio >= val[pos])
		ans = max(ans, pd(pos+1, meio - val[pos]) + val[pos]);
 	if(meio + val[pos] <= tot)
		ans = max(ans, pd(pos+1, meio + val[pos]));

	return dp[pos][meio] = ans;
}
int main()
{
    while(~scanf("%d",&n))
    {
        if(!n)break;
		tot=0;
        for(int i=1;i<=n;i++)
        {
            scanf("%d",&val[i]);
			tot+=val[i];
        }
		memset(dp,-oo,sizeof dp);
		mid = tot/2;
		dp[0][mid]=0;
			for(int pos=1; pos<=n;pos++)
			{
				for(int troco=0;troco<=tot;troco++)
				{
					dp[pos & 1][troco]=dp[!(pos & 1)][troco];
					if(troco>=val[pos])
						dp[pos & 1][troco] = max(dp[pos & 1][troco],dp[!(pos & 1)][troco - val[pos]] + val[pos]);
					if(troco + val[pos] <= tot)
						dp[pos & 1][troco] = max(dp[pos & 1][troco],dp[!(pos & 1)][troco + val[pos]]);
				}
			}
			printf("%d\n",dp[n&1][mid]);
    }
    return 0;
}
