#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;scanf("%d",&n);
	while(n--)
	{
		int n2;scanf("%d",&n2);
		int v[n2];
		memset(v,0,sizeof v);
		for(int i=0;i<n2;i++)
		{
			scanf("%d",&v[i]);
		}
		int c=0;
		for(int i=0;i<n2;i++)
		{
			char s;cin >> s;
			
			if(s=='J' && v[i]>2)
				c++;
			else if(s=='S' && v[i]==1 || s=='S' && v[i]==2)
				c++;
		}
		printf("%d\n",c);
	}
	return 0;
}
