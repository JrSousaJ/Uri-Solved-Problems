#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;scanf("%d",&n);
	getchar();
	while(n--)
	{
		char sz[27],sz1[27],sz2[27];
		cin.getline(sz,27);
        cin.getline(sz1,27);
        cin.getline(sz2,27);
        string s=sz,s1=sz1,s2=sz2;
       // cout << s1.size() << endl << s2.size() << endl;
		if(!s.size() && (s1.size() || s2.size()))printf("CHEATER\n");
		else
		{
			int f=1;
			for(int i=0;i<s1.size();i++)
			{
				if(s.find(s1[i])!=string::npos)
				{
					while(s.find(s1[i])!=string::npos)s.erase(s.begin()+s.find(s1[i]));
				}
				else f=0;
			}
			for(int i=0;i<s2.size();i++)
			{
				if(s.find(s2[i])!=string::npos)
				{
					while(s.find(s2[i])!=string::npos)s.erase(s.begin()+s.find(s2[i]));
				}
				else f=0;
			}
			sort(s.begin(),s.end());
			if(!f)printf("CHEATER\n");
			else cout << s << endl;
		}
	}
}