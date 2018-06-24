#include<bits/stdc++.h>

using namespace std;
int vis[401][401];
int n,n2;
int m=0;
int cc=1;
int dfs(int x,int y)
{
	vis[x][y]=1;
    cc=1;
    if(vis[x+1][y]==0 && x>=0 ) cc+=dfs(x+1,y);
    if(vis[x-1][y]==0) cc+=dfs(x-1,y);
    if(vis[x][y+1]==0) cc+=dfs(x,y+1);
    if(vis[x][y-1]==0) cc+=dfs(x,y-1);
	return cc;
}

int main()
{
	cin >> n >> n2;
    char m;
    memset(vis,-1,sizeof vis);
    for(int i=0;i<n;i++)
    {
    	for(int j=0;j<n2;j++)
    	{
    		scanf(" %c ",&m);
    		if(m=='C')vis[i][j]=0;
    	}
    }
    int ma=0;
    for(int i=0;i<n;i++)
    {
    	for(int j=0;j<n2;j++)
    	{
    		if(vis[i][j]==0)
    		{
               
    			int q=dfs(i,j);
                cc=1;
                printf("%d\n",q);
                if(q>ma)ma=q;
    		}
    	}
    }
    printf("%d\n",ma);

    return 0;
}