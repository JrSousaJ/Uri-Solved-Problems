#include<bits/stdc++.h>

using namespace std;
int main()
{
    char s[100];
    while(~scanf(" %s",&s))
    {
        int n;scanf("%d",&n);
        int ans=0,r=0;
        for(int i=0;i<strlen(s);i++)
        {
            if(s[i]=='W')
            {
                ans++;
                if(r>0)ans++;
                
                r=0;
            }
            else if(s[i]=='R')
            {
                r++;
                if(r==n)
                {
                    ans++;
                    r=0;
                }
            }
        }
        if(r>0)ans++;
        printf("%d\n",ans);
    }
    return 0;
}