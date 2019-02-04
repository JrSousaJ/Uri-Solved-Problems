#include<bits/stdc++.h>

const int oo = 0x3f3f3f3f;
using namespace std;

int main()
{
	long long int n,n2;
	
	while(scanf("%lld%lld",&n,&n2),n!=0 && n2!=0)
	{
		int v[10001];
		int cc=0;
		for(int i=0;i<=n;i++)
			v[i]=0;
		while(n2--)
		{
			int q;scanf("%d",&q);
			if(v[q]==1) cc++;
			v[q]++;
		}
		printf("%d\n",cc);
	}
	
	return 0;
}

