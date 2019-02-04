#include<bits/stdc++.h>

using namespace std;


int main()
{
	int n;
	string s;
	int r=0,g=0,b=0;
	scanf("%d",&n);
	int c=1;
	while(n--)
	{
		cin >> s;
		int ans=0;
		scanf("%d%d%d",&r,&g,&b);
		printf("Caso #%d: ",c);
		if(s=="min")
			{
				ans=min(r,min(g,b));
				printf("%d\n",ans);
			}
		else if(s=="max")
		{
			ans=max(r,max(g,b));
			printf("%d\n",ans);
		}
		else if(s=="mean")
			printf("%d\n",(int)(r+g+b)/3);
		else if(s=="eye")
		{
		
			printf("%.lf\n",(int)(r*0.3) + (g*0.59) + (b*0.11));
		}
		c++;
	}
	return 0;
}



