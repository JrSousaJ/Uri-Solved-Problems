#include<bits/stdc++.h>

using namespace std;
int m,n;
const int M = 1e5+5;
const int N = 1e3 + 1;
int val[N];
int dp[2][M];
int main()
{
    scanf("%d %d",&n,&m);
    for(int i=1;i<=m;i++)scanf("%d",&val[i]);
    memset(dp,0,sizeof dp);
    dp[0][0]=1;
    for(int pos=1;pos<=m;pos++)
    {
        for(int troco=0;troco<=n;troco++)
        {
            dp[pos & 1][troco] = dp[!(pos & 1)][troco];

            if(troco >= val[pos])
            {
                dp[pos & 1][troco] |= dp[!(pos & 1)][troco-val[pos]];
            }
        }
    }
    printf("%c\n",dp[m & 1][n]? 'S' : 'N');
    return 0;
}
