#include<bits/stdc++.h>

using namespace std;

int vis[1030][1030];
int n,n2;
int dx[]={0,0,1,-1},dy[]={1,-1,0,0};
void dfs(int x,int y)
{
	vis[x][y]=1;
	int cc=1;
	for(int i=0;i<4;i++)
	{
		int nx=x+dx[i],ny=y+dy[i];
		if(nx>=0 && ny>=0 && nx<n && ny<n2 && vis[nx][ny]==0)dfs(nx,ny);
	}
}
int main()
{
	scanf("%d%d",&n,&n2);
	getchar();
	char c;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n2;j++)
		{
			scanf("%c ",&c);
			if(c=='o')vis[i][j]=1;
		}
	}
	int ans=0;
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n2;j++)
		{
			if(vis[i][j]==0)
			{
				ans++;
				dfs(i,j);
			}
		}
	}
	printf("%d\n",ans);
	return 0;
}