#include<bits/stdc++.h>

using namespace std;
int main()
{
	int n,m;
	int f=0;
	while(scanf("%d%d",&n,&m))
	{
		if(!n && !m)break;
		char s[n][m];
		for(int i=0;i<n;i++)
		{
			char s1[10000];
			scanf(" %s",s1);
			for(int j=0;j<n;j++)
			{
				s[i][j] = s1[j];
			}
		}
		int a,b;scanf("%d %d",&a,&b);
		int fat1 = a/n, fat2 = b/m;
		for(int i=0;i<n;i++)
		{
			for(int kk=0;kk<fat1;kk++)
			{
				for(int j=0;j<n;j++)
				{
					for(int kk=0;kk<fat2;kk++)printf("%c",s[i][j]);
				}
				printf("\n");
			}
			//printf("\n");
		}
		printf("\n");
	}
	
	return 0;
}