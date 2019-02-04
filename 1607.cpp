#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;cin >> n;
    while(n--)
    {
        string s,s1;cin >> s >> s1;
        int ans=0;
        for(int i=0;i<s.size();i++)ans+=(s1[i]-s[i]+26)%26;

        printf("%d\n",ans);
    }
	return 0;
}
