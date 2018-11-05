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
		int v[n+1];
		for(int i=1;i<=n;i++)scanf("%d",&v[i]);
		int x;scanf("%d",&x);
		int at=bb(v,x,1,n);
		if(at==-1)
		{
			printf("N\n");
		}
		else
		{
				int pass=2;
			bool q=false;
			while(1)
			{
				if(at%pass==0)
				{
					q=true;
					break;
				}
				else at=at-(at/pass);
				pass++;
				if(pass>at)break;
				
			}
			if(q)printf("N\n");
			else printf("Y\n");	
		}
	
		
	}

	return 0;
}
