#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,n2;
	
	while(scanf("%d%d",&n,&n2),n!=0 && n2!=0)
	{
		int ans=0;
		ans=n2-n;
		if(n>n2)
			printf("impossible\n");
		else
		{
			if(ans==7 || ans==12 || ans==22 || ans==52 || ans==102 || ans==4 || ans==10 || ans==20 || ans==40 || ans==100 || ans==200)
				printf("possible\n");
			else if(ans==15 || ans==25 || ans==55 || ans==105)
				printf("possible\n");
			else if(ans==30 || ans==60 || ans==110)
				printf("possible\n");
			else if(ans==70 || ans==120 || ans==150)
				printf("possible\n");
			else
				printf("impossible\n");
		}
	}
}