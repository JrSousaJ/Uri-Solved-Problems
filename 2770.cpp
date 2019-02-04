#include<bits/stdc++.h>

using namespace std;


int main()
{
	long long int c=0,n,cc=0;
	
	while(scanf("%lld%lld%lld",&c,&n,&cc)!=EOF)
	{
		for(int i=0;i<cc;i++)
		{
			long long int n2,n3;
			scanf("%lld%lld",&n2,&n3);
			if(n2<=c && n3<=n || n2<=n && n3<=c)
				printf("Sim\n");
			else
				printf("Nao\n");
		}
	}
	return 0;
}



