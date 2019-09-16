#include<bits/stdc++.h>

using namespace std;
int n,m,k;
int main()
{
    
   	while(~scanf("%d%d%d",&n,&m,&k))
   	{
   		int x,y;
   		char dir;
   		if(!n && !m && !k)break;
   		int s[n][m];
   		for(int i=0;i<n;i++)
   		{
   			scanf(" %[^\n]",s[i]);
   		}
   		for(int i=0;i<n;i++)
   		{
   			for(int j=0;j<m;j++)
   			{
   				if(s[i][j]=='O' || s[i][j]=='L' || s[i][j]=='S' || s[i][j]=='N')
   				{
   					dir = s[i][j];
   					x=i;
   					y=j;
   					break;
   				}
   			}
   		}

   		int ans=0;
   		char sz[k+1];
   		scanf(" %[^\n]",sz);
   		for(int i=0;i<k;i++)
   		{
   			printf("susu\n");
   			if(sz[i] == 'E')
   			{
   				dir = dir=='N'? 'O' : dir=='O'? 'S' : dir == 'S'? 'L' : 'N';
   			}
   			else if(sz[i]=='D')
   			{
   				dir = dir=='N'? 'L' : dir == 'L'? 'S' : dir =='S'? 'O' : 'N';
   			}
   			else if(sz[i]=='F')
   			{
   				if(s[x][y]=='N')
   				{
   					if(x>0 && s[x-1][y]!='#')
   					{
   						if(s[x-1][y] == '*')ans++;
   						s[x-1][y]='N';
   						x--;
   					}

   				}
   				else if(s[x][y]=='O')
   				{
   					if(y>0 && s[x][y-1]!='#')
   					{

   						if(s[x][y-1] == '*')ans++;
   						s[x][y-1]='O';
   						y--;
   					}

   				}
   				else if(s[x][y]=='S')
   				{
   					if(x<n-1 && s[x+1][y]!='#')
   					{
   						if(s[x+1][y] == '*')ans++;
   						s[x+1][y]='S';
   						x++;
   					}

   				}
   				else if(s[x][y]=='L')
   				{
   					if(y<m-1 && s[x][y+1]!='#')
   					{
   						if(s[x][y+1] == '*')ans++;
   						s[x][y+1]='L';
   						y++;
   					}

   				}
   			}

   		}
   		printf("%d\n",ans);
   	}
    return 0;
}