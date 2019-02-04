#include<bits/stdc++.h>
#define ll long long
using namespace std;

int t,n;
int main()
{
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		vector<ll>conjs;
		for(int i=0;i<n;i++)
		{
			int x;scanf("%d",&x);
			ll ans=0;
			for(int j=0;j<x;j++)
			{
				int y; scanf("%d",&y);
				ans |=(1ll << y);
			}
			conjs.push_back(ans);
		}
		int q; scanf("%d",&q);
		while(q--)
		{
			int a,b,c;
			scanf("%d%d%d",&a,&b,&c);
			b--;
				c--;
			if(a==1)
			{
				
				 ll ans= conjs[b] & conjs[c]; //& para intersecção
				printf("%d\n", __builtin_popcountll(ans));
			}
			else
			{
				 ll ans= conjs[b] | conjs[c];// | para união
				printf("%d\n", __builtin_popcountll(ans));
			}
		}
	}

	return 0;
}