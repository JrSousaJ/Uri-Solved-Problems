#include<bits/stdc++.h>

const int oo = 0x3f3f3f3f;
using namespace std;

int main()
{
	int n;
	scanf("%d",&n);
	while(n--)
	{
		int n2; scanf("%d",&n2);
		int v[n2],aux[n2];
		for(int i=0;i<n2;i++)
		{
			scanf("%d",&v[i]);
			aux[i]=v[i];
		}
		int cc=0;
		sort(aux,aux+n2);
		int c=n2-1;
		for(int i=0;i<n2;i++)
		{
			if(v[i]!=aux[c-1])
				cc++;
			c--;

		}
		printf("%d\n",cc/2);
	}
	return 0;
}