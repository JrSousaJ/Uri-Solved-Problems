#include<bits/stdc++.h>

using namespace std;
const int oo = 0x3f3f3f3;
int n,t;
int p[1001],v[1001];
int dp[1001][2001];
int mochila(int pos,int com)
{
	if(pos==n)return 0;
	if(com == 0)return 0;
	if(com < 0)return -oo;

	int &ans = dp[pos][com];

	if(ans == -1)
	{
		ans = max(mochila(pos+1,com), mochila(pos,com-p[pos])+v[pos]);
	}
	return ans;
}
int main()
{
	scanf("%d%d",&n,&t);
	memset(dp,-1,sizeof dp);
	for(int i=0;i<n;i++)
	{
		scanf("%d %d",&p[i],&v[i]);
	}
	printf("%d\n",mochila(0,t));
	return 0;
}