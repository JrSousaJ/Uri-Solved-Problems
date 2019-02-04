#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;scanf("%d",&n);
	while(n--)
	{
		int **v;v=(int **)malloc(10*sizeof(int *));
		for(int i=0;i<10;i++)v[i]=(int *)malloc(10*sizeof(int));

		for(int i=0;i<9;i+=2)
		{
			for(int j=0;j<=i;j+=2)
			{
				scanf("%d",&v[i][j]);
			}
		}
		//começar pela base para poder fazer o resto
		
		v[8][1]=(v[6][0]-v[8][0]-v[8][2])/2;
		v[8][3]=(v[6][2]-v[8][2]-v[8][4])/2;
		v[8][5]=(v[6][4]-v[8][4]-v[8][6])/2;
		v[8][7]=(v[6][6]-v[8][6]-v[8][8])/2;	
		//continuando da base até o topo

		for(int i=7;i>=0;i--)
		{
			for(int j=0;j<=i;j++)
			{
				v[i][j]=v[i+1][j]+v[i+1][j+1];
			}
		}
		printf("%d\n",v[0][0]);
		for(int i=1;i<9;i++)
		{
			for(int j=0;j<=i;j++)
				{
					if(j==i)printf(" %d\n",v[i][j]);
					else if(j==0)printf("%d",v[i][j]);
					else printf(" %d",v[i][j]);
				}
		}


	}
	
    return 0;
}