#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,m;scanf("%d",&n);
	int v[n][n];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",&v[i][j]);
		}
	}
	int ma=0;
	bool vamv=true;
	for(int i=0;i<n;i++)
	{
		int som=0;
		for(int j=0;j<n;j++)
		{
			som+=v[i][j];
		}
	
		if(i==0)
			ma=som;
		if(som!=ma)
			vamv=false;
	}
	for(int i=0;i<n;i++)
	{
		int som=0;
		for(int j=0;j<n;j++)
		{
			som+=v[j][i];
		}

		if(som!=ma)
			vamv=false;
	}
	int som2=0;
	int som=0;
	for(int i=0;i<n;i++)
	{
		
		for(int j=0;j<n;j++)
		{
			if(i==j)
				som+=v[j][i];
			if(j+i==n-1)
				som2+=v[j][i];
		}
		
	}
	if(som!=ma)
			vamv=false;
	if(som2!=ma)
		vamv=false;

	if(vamv==true)
		printf("%d\n",ma);
	else
		printf("-1\n");
	return 0;
}