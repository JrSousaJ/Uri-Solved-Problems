#include<bits/stdc++.h>

using namespace std;

int main()
{
	 string s;
	 int f=0;
	 while(cin >> s)
	 {
	 	if(f)printf("\n");
	 	map<int,int>m;

	 	for(int i=0;i<s.size();i++)
	 	{
	 		
	 		m[(int)s[i]]++;
	 	}
	 	map<int,int>::iterator it;
	 	vector<pair<int,int> > v;
	 	for(it=m.begin();it!=m.end();it++)
	 	{
	 		v.push_back({it->second ,-it->first});
	 	}
	 	sort(v.begin(),v.end());
	 	for(int i=0;i<v.size();i++){
	 		printf("%d %d\n",-v[i].second,v[i].first);
	 	}
	 	f=1;	
	 }
   	return 0;

}
