#include<bits/stdc++.h>

using namespace std;

int main()
{
	int r,x,y,rr,xx,yy;
	while(~scanf("%d %d %d %d %d %d",&r,&x,&y,&rr,&xx,&yy))
	{
		double d = hypot(xx-x,yy-y);
		if(r>=(d+rr))printf("RICO\n");
		else printf("MORTO\n");
	}
	return 0;
}