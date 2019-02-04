#include<bits/stdc++.h>

const int oo = 0x3f3f3f3f;
using namespace std;
#define ll long long int




int main()
{
	int n,n2,n3,n4;scanf("%d%d%d%d",&n,&n2,&n3,&n4);
	int q=n*n2;
	int q2=n3*n4;
	if(q==q2)
		printf("0\n");
	else if(q>q2)
		printf("-1\n");
	else
		printf("1\n");
	return 0;
}