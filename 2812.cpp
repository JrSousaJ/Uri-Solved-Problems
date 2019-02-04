#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;cin >> n;
    while(n--)
    {
        int x;cin >> x;
        vector<int>v;
        for(int i=0;i<x;i++)
        {
            int z;cin >> z;
            if(z%2==1)v.push_back(z);
        }
        sort(v.begin(),v.end());
        if(v.size()>=4)printf("%d %d %d %d %d",v[v.size()-1],v[0],v[v.size()-2],v[1],);
        printf("\n");
        v.clear();

    }

    return 0;
}