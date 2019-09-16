#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,m,x,y;
	while(~scanf("%d%d%d%d",&n,&m,&x,&y))
	{
		if(!n && !m && !x && !y)break;
		int k = n - x - y, z = m - x - y;
		int xx = (k*k)+(z*z),yy = (x*x + y*y + 2*x*y);

		if(k<0 || z<0)printf("N\n");
		else if(xx>=yy && min(n,m) >= 2*max(x,y))printf("S\n");
		else printf("N\n");
	}
	
	return 0;
}	