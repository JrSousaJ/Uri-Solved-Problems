#include<bits/stdc++.h>

using namespace std;
const long double PI=M_PI;
long double y;
long double n,m,o,c=1000;
void bb(long double l,long double r)
{
	c--;
	long double mid=(l+r)/2;
	long double ba=n+((m-n)/o)*mid;
	long double ach=((PI*mid)/3.0)*(pow(ba,2)+ba*n+n*n);
	if(l-0.000000001>=o || c<=0)
		{
			return ;
		}
	if(fabs(ach-y)<0.000000001)
		{
			printf("%.2Lf\n",mid);
			return ;
		}
	
	if(ach<y)bb(mid,r);
	else bb(l,mid);
}
int main()
{
	int z;scanf("%d",&z);
	while(z--)
	{
		double x;scanf("%lf%Lf",&x,&y);
		y/=x;
		scanf("%Lf%Lf%Lf",&n,&m,&o);
		bb(0.000000001,o);
		c=1000; 
	}
	return 0;
}