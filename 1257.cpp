#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;cin >> n;
    while(n--)
    {
        int x;cin >> x;
        int som=0;
        for(int i=0;i<x;i++)
        {
            string s;cin >> s;
            for(int j=0;j<s.size();j++)
            {
                int q=s[j];
                som+=(q-65)+i+j;
            }
        }
        printf("%d\n",som);
    }
	return 0;
}
