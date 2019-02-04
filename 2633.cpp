#include<bits/stdc++.h>

using namespace std;


int main()
{
	int n;
	map <int,string> m; 
	map<int,string>::iterator it;
	string s;
	int n2;
	while(scanf("%d",&n)!=EOF)
	{
		for(int i=0;i<n;i++)
		{
			cin >> s >> n2;
			
				m[n2]=s;
		}
		int q=m.size();
		int c=0;
		for (it=m.begin(); it!=m.end(); it++)
		{
			if(it==m.begin())
			{
    			cout << it->second ;
			}
			else
				cout << ' ' << it->second ;


		}
		printf("\n");
		m.clear();
		
	}
	return 0;
}



