#include<bits/stdc++.h>

using namespace std;
int main()
{
	int x;
	char s[11];
	while(cin >> x >> s)
	{
		int ans=0;
		for(int i=0;i<x;i++)
		{
			ans+=s[i]-'0';
		}
		if(ans%3==0)printf("%d sim\n",ans);
		else printf("%d nao\n",ans);
	}
    return 0;
}