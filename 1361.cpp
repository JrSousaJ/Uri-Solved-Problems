#include<bits/stdc++.h>
 
using namespace std;
void quack(vector<int> &x,int e,int d)
{
	int i=e,j=d;
	int b=x[(e+d)/2];
	do
	{
		while(x[i]<b && i<d)i++;
		while(b<x[j] && j>e)j--;
		if(i<=j)
		{
			swap(x[i],x[j]);
			i++,j--;
		}
	}while(i<=j);
	if(e<j)quack(x,e,j);
	if(i<d)quack(x,i,d);
}

int main()
{
	int n;scanf("%d",&n);
	while(n--)
	{
		int x;scanf("%d",&x);
		vector<int>az;
		vector<int>ver;
		for(int i=0;i<x;i++)
		{
			int a;scanf("%d",&a);
			(a>0) ? ver.push_back(a):az.push_back(-a);
		}
			
		if(ver.size()==0 || az.size()==0)
		{
			printf("1\n");
		}
		else
		{
			quack(ver,0,ver.size()-1);
			quack(az,0,az.size()-1);
			int i=0,j=0,ans=0,a=0;
			while(1)
			{
				while(i<az.size() && az[i]<=a)i++;

				if(i==az.size())break;
				a=az[i];
				ans++;
				while(j<ver.size() && ver[j]<=a)j++;

				if(j==ver.size())break;
				a=ver[j];
				ans++;
			}
			i=0,j=0,a=0;
			int an2=0;
			while(1)
			{
				while(i<ver.size() && ver[i]<=a)i++;

				if(i==ver.size())break;
				a=ver[i];
				an2++;
				while(j<az.size() && az[j]<=a)j++;

				if(j==az.size())break;
				a=az[j];
				an2++;
			}
			//printf("%d %d\n",ans,an2);
			printf("%d\n",max(ans,an2));
		}
		
	}
	return 0;
}