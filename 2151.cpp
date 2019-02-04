#include<bits/stdc++.h>

using namespace std;
int **v,n1,n2;
int **vis;
int dx[]={0,0,1,-1,-1,1,-1,1},dy[]={1,-1,0,0,1,1,-1,-1};
int cc=0;
void dfs(int xx,int yy,int p)
{
	v[xx][yy]+=p;
	//printf("dafuque %d\n",v[xx][yy]);
	vis[xx][yy]=1;
	if(p==1)return ;
	for(int i=0;i<8;i++)
	{
		//printf("aaaa\n");
		int nx=dx[i]+xx,ny=dy[i]+yy;
		//printf("%d %d\n",nx,ny);
		for(int i=0;i<4;i++)
	    {
	        int nx=xx+dx[i],ny=yy+dy[i];
	        if(nx>=0 && ny>=0 && nx<n1 && ny<n2 && vis[nx][ny]==0 && p>=2)dfs(nx,ny,p-1);
	        
	    }

	}
}
int main()
{
	int n;scanf("%d",&n);
	for(int k=1;k<=n;k++)
	{
		int x,y;scanf("%d%d%d%d",&n1,&n2,&x,&y);
		v=(int **)malloc(n1*sizeof(int *));
		for(int i=0;i<n1;i++)v[i]=(int *)malloc(n2*sizeof(int));

		vis=(int **)calloc(n1,sizeof(int *));
		for(int i=0;i<n1;i++)vis[i]=(int *)calloc(n2,sizeof(int));

		for(int i=0;i<n1;i++)
		{
			for(int j=0;j<n2;j++)scanf("%d",&v[i][j]);
		}
		
		dfs(x-1,y-1,10);

		for(int i=0;i<n1;i++)
		{
			for(int j=0;j<n2;j++)cout << v[i][j] << " ";
			printf("\n");
		}


	}
    return 0;
}