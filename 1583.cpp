#include<bits/stdc++.h>

using namespace std;
int vis[51][51];
char c[51][51];
int n,n2;
int dx[]={0,0,1,-1},dy[]={1,-1,0,0};
void ff(int x,int y)
{
	vis[x][y]=3;
	c[x][y]='T';
	for(int i=0;i<4;i++)
	{
		int nx=x+dx[i],ny=y+dy[i];
		if(nx>=0 && ny>=0 && nx<n && ny<n2 && vis[nx][ny]==0)ff(nx,ny);
	}

}
int main()
{
	
	
	while(scanf("%d%d",&n,&n2),n,n2)
	{
		memset(vis,0,sizeof vis);
		getchar();
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n2;j++)
			{
				scanf("%c ",&c[i][j]);
				if(c[i][j]=='T')vis[i][j]=3;
				else if(c[i][j]=='X')vis[i][j]=2;
				
			}
		}
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n2;j++)
			{
				if(vis[i][j]==3)ff(i,j);
			}
		}
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n2;j++)
			{
				printf("%c",c[i][j]);
			}
			printf("\n");
		}
		printf("\n");

	}
    return 0;
}