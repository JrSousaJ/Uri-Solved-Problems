#include<bits/stdc++.h>

using namespace std;
int p1;
int bb(int v[],int l,int r,int cat)
{
	if(l<r)
	{
		int mid=l+(r-l)/2;
		int p=1,c=0;
		for(int i=0;i<p1;i++)
		{
			if(c+v[i]<=mid)
			{
				c+=v[i];
			}
			else 
			{
				p++;
				c=v[i];
			}
		}
		if(p<=cat)return bb(v,l,mid,cat);
		else return bb(v,mid+1,r,cat);
	}
	return l;
	

}
int main()
{
	int z;scanf("%d",&z);

	while(z--)
	{
		int tot=0,ma=-1;
	
		int c,f;scanf("%d%d%d",&p1,&c,&f);
		int a[p1];
		scanf("%d",&a[0]);
		if(a[0]>ma)ma=a[0];
		tot+=a[0];
		for(int i=1;i<p1;i++)
		{
			scanf("%d",&a[i]);
			if(a[i]>ma)ma=a[i];
			tot+=a[i];
		}
		int ans=bb(a,ma,tot,c);
		printf("%d $%d\n",ans,ans*c*f);
	}


	return 0;
}
