#include<bits/stdc++.h>

using namespace std;


int main()
{
	int n;
	int x,y,z;
	int c,cc;
	while(scanf("%d",&n),n!=0)
	{
		for(int i=0;i<n;i++)
		{
			scanf("%d %d %d %d %d",&x,&y,&z,&c,&cc);
		if(x<=127 && y>127 && z>127 && c>127 && cc>127)
		{
			printf("A\n");
		}
		else if(x>127 && y<=127 && z>127 && c>127 && cc>127)
		{
			printf("B\n");
		}
		else if(x>127 && y>127 && z<=127 && c>127 && cc>127)
		{
			printf("C\n");
		}
		else if(x>127 && y>127 && z>127 && c<=127 && cc>127)
		{
			printf("D\n");
		}
		else if(x>127 && y>127 && z>127 && c>127 && cc<=127)
		{
			printf("E\n");
		}
		else
		{
			printf("*\n");
		}
		}
		
	}


	return 0;
}