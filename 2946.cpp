#include<bits/stdc++.h>

using namespace std;

int main()
{
	char s[100005];
	scanf(" %s",s);
	int k;scanf("%d",&k);
	int c=0;
	vector<int>v;
	while(k--)
	{
		int x,r=0;scanf("%d",&x);
		for(int i=0;i<strlen(s);i++)
		{
			r = (r * 2 + (s[i]-'0'))%x;
		}
		if(!r)v.push_back(x);
	}
	if(!v.size())printf("Nenhum\n");
	else
	{
		sort(v.begin(),v.end());
		for(int i=0;i<v.size();i++)
		{
			if(!i)printf("%d",v[i]);
			else printf(" %d",v[i]);
		}
		printf("\n");
	}

	return 0;
}