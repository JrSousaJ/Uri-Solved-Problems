#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;scanf("%d",&n);
	for(int k=1;k<=n;k++)
	{
		int **v;
		int n1,n2,x,y;scanf("%d%d%d%d",&n1,&n2,&x,&y);
		v=(int **)malloc(n1*sizeof(int *));
		for(int i=0;i<n1;i++)v[i]=(int *)malloc(n2*sizeof(int));
		for(int i=0;i<n1;i++)
		{
			for(int j=0;j<n2;j++)scanf("%d",&v[i][j]);
		}
		for(int i=0;i<n1;i++)
		{
			for(int j=0;j<n2;j++)
			{
				int ans=0;
				if(abs(i-(x-1))>abs(j-(y-1)))ans=abs(i-(x-1));
				else ans=abs(j-(y-1));
				int som=10-ans;
				if(som<=0)som=1;
				v[i][j]+=som;
			}
		}
		printf("Parede %d:\n",k);
		for(int i=0;i<n1;i++)
		{
			for(int j=0;j<n2;j++)
				{
					if(!j)printf("%d",v[i][j]);
					else printf(" %d",v[i][j]);
				}
			printf("\n");
		}
		for(int i=0;i<n1;i++)free(v[i]);

		free(v);


	}
    return 0;
}