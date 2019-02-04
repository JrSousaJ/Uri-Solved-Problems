#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    while(scanf("%d",&n),n!=0)
    {
        vector<int>v;
        for(int i=1;i*i<=n;i++)
        {
            v.push_back(i*i);
        }
        for(int i=0;i<v.size();i++)
        {
            if(i==0)printf("%d",v[i]);
            else printf(" %d",v[i]);
        }
        printf("\n");
    }

    return 0;
}