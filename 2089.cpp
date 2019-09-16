#include<bits/stdc++.h>

using namespace std;

int v,n;
const int N = 1e3+5;
const int M = 1e5+5;
int val[N];
int dp[N][M];
int pd(int pos, int troco)
{
  if(troco == 0)return 1;
  if(pos == n)return 0;

  if(dp[pos][troco]!= -1)return dp[pos][troco];

  int ans = pd(pos+1, troco);
  if(troco >= val[pos])
  {
    ans |= pd(pos+1, troco-val[pos]);
  }
  return dp[pos][troco] = ans;
}
int main()
{
  while(~scanf("%d %d",&v,&n))
  {
    if(!v && !n)break;
    memset(dp,0, sizeof dp);
    for(int i=1;i<=n;i++)
    {
      scanf("%d\n",&val[i]);
    }
    dp[0][0]=1;

    for(int pos=1;pos<=n;pos++)
    {
      for(int troco=0;troco<=v;troco++)
      {
        dp[pos & 1][troco]=dp[!(pos & 1)][troco];//ignorar moeda de agora

        if(troco >= val[pos])
        {
          dp[pos & 1][troco] |= dp[!(pos & 1)][troco-val[pos]];
        }
      }
    }
    printf("%s\n",dp[n & 1][v]? "sim": "nao");
  }
  return 0;
}
