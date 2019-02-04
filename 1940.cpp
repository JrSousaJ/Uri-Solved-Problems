#include<bits/stdc++.h>

using namespace std;
int main()
{
	int n,n2;cin>>n>>n2;
	int v[n];memset(v,0,sizeof v);
	while(n2--)
	{
		for(int i=0;i<n;i++)
		{
			int x;scanf("%d",&x);
			v[i]+=x;
		}
	}
	int ans=0,p=0;
	for(int i=0;i<n;i++)
	{
		if(v[i]>=ans)
		{
			ans=v[i];
			p=i+1;
		}
	}
	cout << p << endl;
    return 0;
}