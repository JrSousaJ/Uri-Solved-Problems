#include<bits/stdc++.h>

using namespace std;

int main()
{
  	int n,m;cin >> n >> m;
  	int v[n][m];
  	for(int i=0;i<n;i++)
  	{
  		for(int j=0;j<m;j++)
  		{
  			scanf("%d",&v[i][j]);
  		}
  	}
  	int x=0,y=0;
  	int b=0;
  	for(int i=1;i<n-1;i++)
  	{
  		for(int j=1;j<m-1;j++)
  		{
  			 if (v[i][j] == 42 && v[i - 1][j - 1] == 7 && v[i][j - 1] == 7 && v[i + 1][j - 1] == 7 && v[i - 1][j] == 7 && v[i + 1][j] == 7 && v[i - 1][j + 1] == 7 && v[i][j + 1] == 7 && v[i + 1][j + 1] == 7)
  			{
  				x=i+1;y=j+1;
  				break;
  			}
  		}
  	}
  	printf("%d %d\n",x,y);
   	return 0;
}
