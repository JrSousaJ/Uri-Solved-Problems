#include<bits/stdc++.h>

using namespace std;
int n,v[100][100],dir[100][100],vis[100][100];
void dfs(int x, int y)
{
	vis[x][y]=1;
	//if(x>=n || y>=n || y<0 || x<0)return 0;
	dir[x][y]++;
	dfs(x,y);
	dir[x][y]++;
	dfs(x,y);
	dir[x][y]++;
	dfs(x,y);
	dir[x][y] = (dir[x][y]+1)%4;
	dfs(x,y);
	if(dir[x][y]==0)
	{
		vis[x][y]=1;
		dir[x][y]++;
		if(x+1<n && !vis[x+1][y] && v[x+1][y]>=v[x][y])dfs(x+1,y);
	}
	if(dir[x][y]==1)
	{
		dir[x][y]++;
		if(y-1>=0 && !vis[x][y-1] && v[x][y-1]>=v[x][y])dfs(x,y-1);
	}
	if(dir[x][y]==2)
	{
		dir[x][y]++;
		if(x-1>=0 && !vis[x-1][y] && v[x-1][y]>=v[x][y])dfs(x-1,y);
	}
	if(dir[x][y]==3)
	{
		dir[x][y]=0;
		if(y+1<n && !vis[x][y+1] && v[x][y+1]>=v[x][y])dfs(x,y+1);
	}
}
int main(int argc, char const *argv[])
{
	scanf("%d",&n);
	int a,b;scanf("%d%d",&a,&b);
	memset(vis,0,sizeof vis);
	for(int i=0;i<n;i++)
	{
		for (int j = 0; j < n; j++)
		{
			scanf("%d",&v[i][j]);
			dir[i][j] = 0;
		}
	}
	dfs(a-1,b-1);
	int c=0;
	for(int i=0;i<n;i++)
	{
		for (int j = 0; j < n; j++)
		{
			if(vis[c])c++;
		}
	}
	printf("%d\n",c);
	return 0;
}