#include<bits/stdc++.h>

using namespace std;
#define ll long long int
int main()
{
	int n;scanf("%d",&n);
	int v[n];
	map<int,int>mapa;
	for(int i=0;i<n;i++)
	{
		v[i]=i+1;
		mapa[i+1]=1;
	}
	for(int i=0;i<n-1;i++)
	{
		int x;scanf("%d",&x);
		mapa[x]=0;
	}
	for(int i=1;i<=n;i++)
	{
		if(mapa[i]==1)
			printf("%d\n",i);
	}

	
	return 0;
}