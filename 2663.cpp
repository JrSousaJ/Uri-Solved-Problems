#include<bits/stdc++.h>

const int oo = 0x3f3f3f3f;
using namespace std;

int main()
{
	int n;scanf("%d",&n);
	int v[n];
	int q;scanf("%d",&q);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&v[i]);
	}
	

	int c=0;
	if(n!=q)
	{
		sort(v,v+n);
		while(q<n && v[n-q-1]==v[n-q])
			q++;
	}

	printf("%d\n",q);
	return 0;
}