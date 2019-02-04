#include<bits/stdc++.h>
using namespace std;
int n;
int kad(int *v2)
{
	int maiat=0,c=0;;
	for(int i=0;i<n;i++)
	{
		maiat=max(v2[i],maiat+v2[i]);
		if(maiat==0)
			c++;
	}
	if(maiq<0)
		return 0;
	return maiq;
}
#define ll long long int
int main()
{
	while(scanf("%d",&n)!=EOF)
	{
		int q;scanf("%d",&q);
		int v[n];
		for(int i=0;i<n;i++)
		{
			scanf("%d",&v[i]);
			v[i]-=q;
		}
		cout << kad(v) << endl;
	}
      


    return 0;
}