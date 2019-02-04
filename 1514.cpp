#include<bits/stdc++.h>

using namespace std;
int main()
{
	int n,n2;
	while(scanf("%d%d",&n,&n2),n,n2)
	{
		int l[n],c[n2];memset(l,0,sizeof l);
		memset(c,0,sizeof c);
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n2;j++)
			{
				int x;scanf("%d",&x);
				l[i]+=x;
				c[j]+=x;
			}
		}
		int b=1,b1=1,b2=1,b3=1;
		for(int i=0;i<n;i++)
		{
			if(l[i]==n2)b=0;
			if(l[i]==0)b1=0;
		}
		for(int i=0;i<n2;i++)
		{
			if(c[i]==n)b2=0;
			if(c[i]==0)b3=0;
		}
		printf("%d\n",(b1+b+b2+b3));
	}
	
	
    return 0;
}