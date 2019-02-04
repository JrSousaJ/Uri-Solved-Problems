#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,n2;
	while(cin >> n >> n2,n,n2)
	{
		int v[n2];
		long long int ans=0;
		for(int i=0;i<n2;i++)
		{
			scanf("%d",&v[i]);
			if(i!=0)
			{
				if(v[i-1]>v[i])ans+=v[i-1]-v[i];
			}
			else ans+=n-v[i];
		}
		printf("%lld\n",ans);
	}
	return 0;
}