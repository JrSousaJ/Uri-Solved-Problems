#include<bits/stdc++.h>

using namespace std;
const int oo = 0x3f3f3f3;
int main()
{
	int n,m;
	int f=0;
	scanf("%d%d",&n,&m);
	
		int v[n][m];
		int ans=-1;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				char c;
				cin >> c;
				if(c=='#')v[i][j]=oo;
				else if(c=='@')v[i][j]=0;
			}
		}
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				if(v[i][j]==0)
				{
					int k=1;
					for(int xx=j+1;xx<m;xx++)
					{
						if(!v[i][xx])break;
						v[i][xx] = min(k++,v[i][xx]);
					}
					k=1;
					for(int xx=j-1;xx>=0;xx--)
					{
						if(!v[i][xx])break;
						v[i][xx] = min(k++,v[i][xx]);
					}
					k=1;
					for(int xx=i+1;xx<n;xx++)
					{
						if(!v[xx][j])break;
						v[xx][j] = min(k++,v[xx][j]);
					}
						
					k=1;
					for(int xx=i-1;xx>=0;xx--)
					{
						if(!v[xx][j])break;
						v[xx][j] = min(k++,v[xx][j]);
					}
				}
			}
		}
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				ans = max(ans,v[i][j]);
			}
		}
		if(ans==oo)printf("-1\n");
		else printf("%d\n",ans);
	
	
	return 0;
}