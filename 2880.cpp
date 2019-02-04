#include<bits/stdc++.h>

using namespace std;

int main()
{
	string s,s1;cin >> s >> s1;
	int q=s.size()-s1.size();
	int ans=0;
	for(int i=0;i<=q;i++)
	{
		int f=1;
		for(int j=0,k=i;j<s1.size();j++,k++)
		{
			if(s[k]==s1[j])
			{
				f=0;
				break;
			}
		}
		if(f)ans++;
	}
	printf("%d\n",ans);
	return 0;
}