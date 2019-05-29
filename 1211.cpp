#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    while(~scanf("%d",&n))
    {
        vector<string>v;
        for(int i=0;i<n;i++)
        {
            string x;
            cin >> x;
            v.push_back(x);
        }
        int m=-1,ans=0;
        sort(v.begin(),v.end());
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<v[i].size();j++)
            {
                if(v[i][j]==v[i-1][j])ans++;
                else break;
            }
        }
        v.clear();
        printf("%d\n",ans);
    }
    return 0;
}
