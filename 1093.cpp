#include<bits/stdc++.h>

using namespace std;
int main()
{
	double n,m,k,j;
	while(~scanf("%lf%lf%lf%lf",&n,&m,&k,&j))
	{
		if(!n && !m && !k && !j)break;
		
		double kek=n;
		int c=0,cc=0;
		while(kek>0)
		{
			kek-=j;
			c++;
		}
		kek = m;
		while(kek>0)
		{
			kek-=j;
			cc++;
		}
		double x = 1 - (6-k)/6;
		double kk = (1 -x)/x;
		double xx = pow(kk,c);
		double y = pow(kk,c+cc);
		if(k==3)
		{
			printf("%.1lf\n",100* ((double)c/(double)(cc+c)));
			continue;
		}
		printf("%.1lf\n",100*(((1.0-xx)/(1.0-y))));
	}

	
	return 0;

}