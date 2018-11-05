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
	int n,n2,k=1;
	while(scanf("%d%d",&n,&n2),n,n2)
	{
		int x[n];
		for(int i=0;i<n;i++)scanf("%d",&x[i]);
	
		sort(x,x+n);
		
		printf("CASE# %d:\n",k++);
		while(n2--)
		{
			int b;scanf("%d",&b);
			int q=bb(x,b,0,n-1);
			if(q==-1)printf("%d not found\n",b);
			else
			{
				
				for(int i=q-1;i>=0;i--)
				{
					if(x[i]==x[q])q=i;
					
				}
				printf("%d found at %d\n",b,q+1);
			}
		}
	}
	
	
	return 0;
}
