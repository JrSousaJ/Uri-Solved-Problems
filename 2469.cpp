#include<bits/stdc++.h>

const int oo = 0x3f3f3f3f;
using namespace std;
#define ll long long int




int main()
{
	int n;scanf("%d",&n);
	int v[101];
	memset(v,0,sizeof v);
	int m=0,ma=0;
	for(int i=0;i<n;i++)
	{
		int q;scanf("%d",&q);
		v[q]++;
	}
	for(int i=0;i<=100;i++)
	{
		if(v[i]>=ma)
		{
			ma=v[i];
			m=i;
		}
	}
	printf("%d\n",m);
	return 0;
}