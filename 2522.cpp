#include<bits/stdc++.h>

using namespace std;
struct pontos
{
	int a,b;
}v[501];
struct arestas
{
	int a,b;
	double w;
	bool operator <(const arestas&q)const{
		return w < q.w;
	}
};
int p[502];
int findset(int a)
{
	if(p[a] == a)return a;
	return p[a]=findset(p[a]);
}
void unionset(int a,int b)
{
	int fa = findset(a);
	int fb = findset(b);

	p[fb] = fa;
}
vector<arestas>v1;
int n;
int main()
{

	while(~scanf("%d",&n))
	{
		v1.clear();
		double ans=0;
		for(int i=0;i<n;i++)scanf("%d %d",&v[i].a,&v[i].b);

		for(int i=0;i<n;i++)p[i] = i;

		for(int i=0;i<n;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				double w = hypot(v[i].a - v[j].a, v[i].b - v[j].b);
				v1.push_back({i,j,w});
			}
		}
		sort(v1.begin(),v1.end());
		for(int i=0;i<v1.size();i++)
		{
			int a = v1[i].a;
			int b = v1[i].b;
			double w = v1[i].w;
			if(findset(a) != findset(b))
			{
				ans+=w;
				unionset(a,b);
			}
		}
		printf("%.2lf\n", ans);
	}
	
	return 0;
}	