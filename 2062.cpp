#include<bits/stdc++.h>

using namespace std;
#define ll long long int
int main()
{
	int n;scanf("%d",&n);
	getchar();
	for(int i=0;i<n;i++)
	{
		string s;cin >> s;
		if(i==0)
		{
			if(s.size()==3 && s[0]=='O' && s[1]=='B')
				printf("OBI");
			else if(s.size()==3 && s[0]=='U' && s[1]=='R')
				printf("URI");
			else
				cout << s;
		}
		else
		{
			if(s.size()==3 && s[0]=='O' && s[1]=='B')
				printf(" OBI");
			else if(s.size()==3 && s[0]=='U' && s[1]=='R')
				printf(" URI");
			else
				cout << " " << s;
		}
	}
	printf("\n");
	return 0;
}