#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	int n;
	scanf("%d",&n);
	string s,s1,s2;
	for(int i=1;i<=n;i++)
	{
		getline(cin,s);
        getline(cin,s1);
        getline(cin,s2);
		int ans1=0,ans2=0;
		printf("Instancia %d\n",i);
		for(int i=0;i<s.size();i++)
			{
				
				if(s[i]==s1[i])				
					ans1++;
				if(s[i]==s2[i])
					ans2++;
			}
		if(ans1==ans2)
		{
			for(int i=0;i<s.size();i++)
			{
				
				if(s[i]==s1[i] && s[i]!=s2[i])
				{
					ans1++;
					break;
				}	
					
				if(s[i]==s2[i] && s[i]!=s1[i])
				{
					ans2++;
					break;
				}
			}
		}

			if(ans1==ans2)
				printf("empate\n");
			else if(ans1>ans2)
				printf("time 1\n");
			else
				printf("time 2\n");
			printf("\n");
	}

	

	return 0;
}