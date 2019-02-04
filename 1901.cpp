#include<bits/stdc++.h>

using namespace std;
int main()
{
	set<int>conj;
	int x;scanf("%d",&x);
	int v[x][x];
	for(int i=0;i<x;i++)
	{
		for(int j=0;j<x;j++)
		{
			scanf("%d",&v[i][j]);
		}
	}
	for(int i=0;i<2*x;i++)
	{
		int y,z;scanf("%d%d",&y,&z);
		conj.insert(v[y-1][z-1]);
	}
	cout << conj.size() << endl;
    return 0;
}