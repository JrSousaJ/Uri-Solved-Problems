#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;scanf("%d",&n);
	int v[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&v[i]);
	}
	sort(v,v+n);
	bool aqui=false;
	if(v[0]>8)
	{
			printf("N\n");
			return 0;
	}
	else 
	{
		for(int i=1;i<n;i++)
		{
			if(v[i]-v[i-1]>8)
			{
				aqui=true;
				printf("N\n");
				break;
			}
		}
	}
	if(!aqui)printf("S\n");
	

	return 0;
}