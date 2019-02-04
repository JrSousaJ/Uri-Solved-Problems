#include<bits/stdc++.h>

using namespace std;
const int N=1001;
const int K=2001;
int p[N],v[N];
int n,k;
int memo[N][K];
int mochila(int pos, int cap)
{
	if(pos==n)return 0;
	if(memo[pos][cap]!=-1)return memo[pos][cap];
	int naopega=mochila(pos+1,cap);
	int pega=-1;
	if(p[pos]<=cap)
	{
		pega=mochila(pos+1,cap-p[pos]+v[pos]);
	}
	return memo[pos][cap]=max(pega,naopega);
}
int main()
{
	while(~scanf("%d%d",&n,&k))
	{
		memset(memo,-1,sizeof memo);
		for(int i=0;i<n;i++)
		{
			scanf("%d%d",&p[i],&v[i]);
		}
		int ans=mochila(0,k);
		printf("%d\n",ans);
	}
    return 0;
}