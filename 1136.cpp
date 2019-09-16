#include<bits/stdc++.h>

using namespace std;
int main()
{
	int n,m;
	while(~scanf("%d%d",&n,&m))
	{
		if(!n && !m)break;
		int v[m];
		set<int>vv;
		for(int i=0;i<m;i++)
		{
			scanf("%d",&v[i]);
		}
		for(int i=0;i<m;i++)
		{
			vv.insert(v[i]);
			for(int j=i+1;j<m;j++)
			{
				vv.insert(abs(v[i]-v[j]));

			}
		}
		int f=1;
		//for(set<int>::iterator it = vv.begin();it!=vv.end();it++)cout << *it << endl;
		for(int i=0;i<=n;i++)
		{
			if(vv.find(i)==vv.end())f=0;
		}
		printf("%c\n",!f? 'N' : 'Y');
	}
	return 0;
}