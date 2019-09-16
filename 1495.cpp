#include<bits/stdc++.h>

using namespace std;


int ans=0,em;
int n,m;

int main()
{
	
	while(~scanf("%d %d",&n,&m))
	{
		ans=0,em=0;
		vector<int>v;
		for(int i=0;i<n;i++)
		{
			int a,b;scanf("%d%d",&a,&b);
			if(a==b){
				if(m)
				{
					ans+=3;
					m--;
				}
				else ans++;
			}
			if(a-b>0)ans+=3;
			else if(a-b<0)v.push_back(abs(a-b));
		}
		sort(v.begin(),v.end());
		for(int i=0;i<v.size();i++)
		{
			if(m>= (v[i]+1))
			{
				ans+=3;
				m-=v[i]+1;
			}
			else if(m==v[i])
			{
				m=0;
				ans++;
			}
		}
		printf("%d\n",ans);

	}
	return 0;

}