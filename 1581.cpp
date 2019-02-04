#include<bits/stdc++.h>

using namespace std;


int main()
{
	set<string> s;
	set<string>::iterator it;
	string s1;
	int n;
	scanf("%d",&n);
	while(n--)
	{
		int n2;
		scanf("%d",&n2);
		while(n2--)
		{
			cin >> s1;
			s.insert(s1);
		}
		if(s.size()>1)
		{
			printf("ingles\n");
		}
		else
		{
			for(it=s.begin();it!=s.end();it++)
				cout << *it << endl;
		}
		s.clear();
	}
	return 0;
}



