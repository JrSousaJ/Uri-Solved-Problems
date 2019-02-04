#include<bits/stdc++.h>

using namespace std;
#define ll long long int
int main()
{
	int q,q2;
	int c=0;
	while(scanf("%d%d",&q,&q2),q!=0 && q2!=0)
	{
		bool af[q2][q];
		
		for(int i=0;i<q2;i++)
		{
			
			for(int j=0;j<q;j++)
			{
				
				scanf("%d",&af[i][j]);
			}
		}
		bool tnc=false;
		for(int i=0;i<q;i++)
		{
			c=0;
			for(int j=0;j<q2;j++)
			{
				if(af[j][i]) c++;
			}
			if(c==q2)
			{
				printf("yes\n");
				tnc=true;
				break;
			}
			
		}
		if(tnc==false)
			printf("no\n");
	}
	return 0;
}