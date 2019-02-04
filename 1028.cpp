#include<bits/stdc++.h>

using namespace std;

int main()
{
	long long int n,n2,n3;
	scanf("%lld",&n);
	while(n--)
	{
		scanf("%lld%lld",&n2,&n3);
		int ans=1;
		if(n2>n3)
			swap(n2,n3);
		while(ans!=0)
		{
			ans=n3%n2;
			n3=n2;
			if(ans==0)
				break;
			n2=ans;
		}
		printf("%lld\n",n2);
	}
	return 0;
}