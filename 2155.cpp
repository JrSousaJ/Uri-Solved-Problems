#include<bits/stdc++.h>

using namespace std;

const int oo = 0x3f3f3f3f;
int main()
{
	int n;scanf("%d",&n);
	for(int xzx = 1;xzx<=n;xzx++)
	{
		int x,y;
		scanf("%d%d",&x,&y);
		vector<pair<int,pair<int,int> > > v;
		for(int i=1;i<7;i++)
		{
			int x1,y1,l;
			scanf("%d%d%d",&l,&x1,&y1);
			v.push_back({l,{x1,y1}});
		}
		sort(v.begin(), v.end());
		double menor=100000;
		int k,kk;
		int ponto;
		vector<int>zz;
		do
		{
			
			double dis=0;
			k=x,kk=y;
			for(int i=0;i<v.size();i++)
			{
				dis+=hypot((k-v[i].second.first),(kk-v[i].second.second));
				k = v[i].second.first;
				kk= v[i].second.second;
			}
			int haha=v.size()-1;
			dis+=hypot((x-v[haha].second.first),(y-v[haha].second.second));
			if(menor>dis)
			{
				zz.clear();
				for(int i=0;i<v.size();i++)
				{
					zz.push_back(v[i].first);
				}
				menor = dis;
			}			

		}while(next_permutation(v.begin(), v.end()));
		printf("Caso %d:\n",xzx);
		printf("4->");
		for(int i=0;i<zz.size();i++)
			printf("%d->",zz[i]);
		printf("4: %.5lf\n",menor);
	}
	return 0;
}