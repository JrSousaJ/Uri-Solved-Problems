#include<bits/stdc++.h>

const int oo = 0x3f3f3f3f;
using namespace std;
#define lf long double
int main()
{
	int n;scanf("%d",&n);
	while(n--)
	{
		int n2,n3;scanf("%d%d",&n2,&n3);
		printf("%d cm2\n",(int)((n2*n3)/2));
	}
	return 0;
}