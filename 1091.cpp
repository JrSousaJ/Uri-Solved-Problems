#include<bits/stdc++.h>

using namespace std;


int main()
{
	int n;
	int x,y;
	int c,cc;
	while(scanf("%d",&n),n!=0)
	{
		scanf("%d %d",&x,&y);
		for(int i=0;i<n;i++)
		{
			scanf("%d%d",&c,&cc);
			if(c==x || cc==y)
				printf("divisa\n");
			else if(c>x && cc>y)
				printf("NE\n");
			else if(c>x && cc<y)
				printf("SE\n");
			else if(c<x && cc<y)
				printf("SO\n");
			else
				printf("NO\n");

		}
	}


	return 0;
}