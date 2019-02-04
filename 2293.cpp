#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,m;scanf("%d%d",&n,&m);
	int v[n][m];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			scanf("%d",&v[i][j]);
		}
	}
	int ma=0;

	for(int i=0;i<n;i++)
	{
		int som=0;
		for(int j=0;j<m;j++)
		{
			som+=v[i][j];
		}

		if(som>ma)
			ma=som;
	}
	for(int i=0;i<m;i++)
	{
		int som=0;
		for(int j=0;j<n;j++)
		{
			som+=v[j][i];
		}

		if(som>ma)
			ma=som;
	}
	printf("%d\n",ma);
	return 0;
}