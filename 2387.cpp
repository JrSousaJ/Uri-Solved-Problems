#include<bits/stdc++.h>

using namespace std;
#define ll long long int
int main()
{
	int n;scanf("%d",&n);
	int h=0;
	int c=0;
	
	vector< pair<int, int> > v;
	for(int i=0;i<n;i++)
	{
		long long int m,m2;scanf("%lld%lld",&m,&m2);
		v.push_back(make_pair(m2,m));

	}
	sort(v.begin(),v.end());
	int j=0;
	for(int i=1;i<n;i++)
	{
		if(v[i].second >= v[j].first)
		{
			c++;
			j=i;
		}
	}
	printf("%d\n",c+1);
		/*if(m>=h)
		{
			
			h=m2;
			printf("pqp %lld %lld %lld\n",m,m2,h);
			c++;
		}*/

	
	
	return 0;
}