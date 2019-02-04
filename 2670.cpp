#include<bits/stdc++.h>

const int oo = 0x3f3f3f3f;
using namespace std;

int main()
{
	int n,n2,n3; scanf("%d%d%d",&n,&n2,&n3);
	int v[3];
	v[0]=(n*2)+(n3*2);
	v[1]=(n2*2)+(n3*4);
	v[2]=(n*4)+(n2*2);
	sort(v,v+3);
	printf("%d\n",v[0]);
	return 0;
}