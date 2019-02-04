#include<bits/stdc++.h>

using namespace std;
void quack(int x[],int e,long long int d)
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
	int v[n];
	for(int i=0;i<n;i++)scanf("%d",&v[i]);
	int n2;scanf("%d",&n2);
	int v2[n2];
	for(int i=0;i<n2;i++)scanf("%d",&v2[i]);
	int n3;scanf("%d",&n3);
	int v3[n3];
	for(int i=0;i<n3;i++)scanf("%d",&v3[i]);
	int n4;scanf("%d",&n4);
	int v4[n4];
	for(int i=0;i<n4;i++)scanf("%d",&v4[i]);
	int n5;scanf("%d",&n5);
	int v5[n5];
	for(int i=0;i<n5;i++)scanf("%d",&v5[i]);
	int xx;scanf("%d",&xx);
	long long int dnv=n*n2*n3*n4*n5;
	int ans[dnv],c=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n2;j++)
		{
			for(int q=0;q<n3;q++)
			{
				for(int k=0;k<n4;k++)
				{
					for(int p=0;p<n5;p++)
					{
						ans[c++]=((v[i]+v2[j]+v3[q]+v4[k]+v5[p]));
					}
				}
			}
		}
	}

	quack(ans,0,dnv-1);
	//for(int i=0;i<dnv;i++)printf("%d\n",ans[i]);
	int tot=0;
	for(int i=dnv-1;i>=0;i--)
	{
			if(xx<=0)break;
			tot+=ans[i],xx--;
	}
	printf("%d\n",tot);
	return 0;
}