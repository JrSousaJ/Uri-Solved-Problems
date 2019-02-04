#include<bits/stdc++.h>

using namespace std;
#define ll long long int
int v[50006];
int main()
{
	int n;cin >> n;
	map<int,int>mapa;
	for(int i=0;i<n;i++) 
	{
		scanf("%d",&v[i]);
		mapa[v[i]]=1;
	}

	int m;cin >> m;
	while(m--)
	{
		
		int a;scanf("%d",&a);
		mapa[a]=0;
	}
	int c=0;
	for(int i=0;i<n;i++)
	{
		if(mapa[v[i]]==1 && c==0)
		{
			c++;
			printf("%d",v[i]);
		}
		else if(mapa[v[i]]==1)
			printf(" %d",v[i]);		
	}
	printf("\n");
	return 0;
}