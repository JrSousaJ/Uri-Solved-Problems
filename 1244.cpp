#include<bits/stdc++.h>

using namespace std;
vector<string>mp;
map<int,string>pm;
int get(string x)
{
	mp.push_back(x);
	pm[mp.size()] = x;
	return mp.size();
}

int main()
{
	int n;scanf("%d",&n);
	while(n--)
	{
		vector<pair<int,int> > v;
		mp.clear();
		pm.clear();
		char s[100000];
		scanf(" %[^\n]",s);
		//printf("ss\n");
		char *p = strtok(s," ");
		while(p!=NULL)
		{
			v.push_back({-strlen(p),get(p)});
			p = strtok(NULL, " ");
		}

		sort(v.begin(),v.end());
		for(int i=0;i<v.size();i++)
		{
			printf("%s%s",pm[v[i].second].c_str(),i==v.size()-1? "\n" : " ");
		}

	}
	return 0;
}