#include<bits/stdc++.h>

using namespace std;
int bb(int v[],int p,int l,int r)
{
	int mid=(l+r)/2;
	if(v[mid]==p)return mid;
	if(l>=r)return -1;
	if(p<v[mid])bb(v,p,l,mid-1);
	else bb(v,p,mid+1,r);
}
int main()
{
	int n;
	while(~scanf("%d",&n))
	{
		int j=0;
		int v[1000000];
		while(n--)
		{
			int x,y;scanf("%d %d",&x,&y);
			for(int i=x;i<=y;i++)v[j++]=i;
		}
		sort(v,v+j);
		int a;scanf("%d",&a);
		int ans=bb(v,a,0,j-1);
		if(ans==-1)printf("%d not found\n",a);
		else
		{
			int ali=ans,aqui=ans;
			for(int i=ans+1;i<j;i++)
			{
				if(v[i]==a)ali=i;
				else break;
			}
			for(int i=ans;i>=0;i--)
			{
				
				if(v[i]==a)aqui=i;
				else break;
			}
			printf("%d found from %d to %d\n",a,aqui,ali);
		}

	}
	return 0;
}
