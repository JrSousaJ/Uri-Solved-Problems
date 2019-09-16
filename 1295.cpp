#include<bits/stdc++.h>

using namespace std;
#define EPS 0.00000001

struct pontos
{
	double a,b;
	bool operator <(const pontos&q)const
	{
		if(fabs(b-q.b)>EPS)return b < q.b;
		return a < q.a;
	}
};

int main(int argc, char const *argv[])
{
	int n;
	pontos v[10005];
	while(scanf("%d",&n),n)
	{
		for(int i=0;i<n;i++)scanf("%lf %lf",&v[i].a,&v[i].b);

		if(n<=1)
		{
			printf("INFINITY\n");
			continue;
		}
		sort(v,v+n);
		double ans=1000000;
		for(int i=0;i<n-1;i++)
		{
			double m = hypot(v[i].a - v[i+1].a, v[i].b - v[i+1].b);
			for(int j=i+2;j<n;j++)
			{
				double k = hypot(v[i].a - v[j].a, v[i].b - v[j].b);
				if(k<m) m = k;
				else break;
			}
			ans = min(m,ans);
		}
		if(ans>=10000)printf("INFINITY\n");
		else printf("%.4lf\n",ans);
	}
	
	return 0;
}	