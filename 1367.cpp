#include<bits/stdc++.h>

using namespace std;
int main()
{
   	int n;
   	while(~scanf("%d",&n))
   	{
   		int ans=0,c=0;
   		map<char, pair<int,int> > v;
   		if(!n)break;
   		for(int i=0;i<n;i++)
   		{
   			char id;
   			char pas[1000];
   			int tempo;
   			cin >> id >> tempo >> pas; 
   			if(!strcmp(pas,"incorrect") && v[id].second == 0)
   			{
   				v[id] = make_pair(v[id].first+20, 0);

   			}
   			if(!strcmp(pas,"correct") && v[id].second == 0)
   			{
   				v[id] = make_pair(v[id].first+tempo,1);
   				ans+=v[id].first;
   				c++;
   			}
   		}
   		printf("%d %d\n",c, ans);
   	}

   
    return 0;
}