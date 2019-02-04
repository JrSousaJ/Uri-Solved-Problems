#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	while(scanf("%d",&n),n)
	{
		for(int i=1;i<=n;i++)
		{
			double a,b,c;scanf("%lf%lf%lf",&a,&b,&c);
			printf("Size #%d:\n",i);
			printf("Ice Cream Used: %.2lf cm2\n",(((b+c)*5.0)/2.0)*a);
		}
		printf("\n");

	}
    return 0;
}