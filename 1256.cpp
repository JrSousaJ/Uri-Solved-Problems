#include<bits/stdc++.h>

using namespace std;
int main()
{
	int n;scanf("%d",&n);
	int f=0;
	while(n--)
	{
		if(f)printf("\n");
		int m,k;scanf("%d%d",&m,&k);
		vector<vector<int> >v;
		v.assign(m,vector<int>());
		for(int i=0;i<k;i++)
		{
			int a;scanf("%d",&a);
			int rst = a % m;
			v[rst].push_back(a);
		}
		for(int i=0;i<m;i++)
		{
			printf("%d -> ",i);
			for(int j=0;j<v[i].size();j++)
			{
				printf("%d -> ",v[i][j]);
			}
			printf("\\\n");
		}
		f=1;
	}
	
	return 0;
}