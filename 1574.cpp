#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;scanf("%d",&n);
    while(n--)
    {
        int x,ans=0;scanf("%d",&x);
        getchar();
        string s[x];
        for(int i=0;i<x;i++)
        {
            getline(cin,s[i]);
            if(s[i][0]=='S')
                s[i]=s[stoi(s[i].substr(8))-1];
            if(s[i]=="RIGHT")ans++;
            else ans--;
        }
        printf("%d\n",ans);
    }
   	return 0;
}