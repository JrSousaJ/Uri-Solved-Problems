#include<bits/stdc++.h>

using namespace std;
int xx,tam;
double val(vector<int>&aa,double x)
{
	double a=0;
	for(int i=xx-1;i>=0;i--)
	{
		if(x>=aa[i])return a;
		a+=(double)aa[i]-x;
	}
	return a;
}
double bb(vector<int>&x, double l,double r)
{
	double mid=(l+r)/2;
	double ach=val(x,mid);
	if(l>r)return -1;
	if(fabs(ach-(double)tam)<0.0001)return mid;
	else if(ach<tam)bb(x,l,mid);
	else bb(x,mid,r);
}

int main()
{

	while(~scanf("%d%d",&xx,&tam))
	{
		if(!xx && !tam)break;
		vector<int>v;
		int at=0;
		for(int i=0;i<xx;i++)
		{
			int a;scanf("%d",&a);
			at+=a;
			v.push_back(a);
		}
		sort(v.begin(),v.end());
		if(at==tam)printf(":D\n");
		else if(at<tam)printf("-.-\n");
		else
		{
			double ans=bb(v,0,v[xx-1]);
			printf("%.4lf\n",ans);
		}
		
		

	}
	return 0;
}

