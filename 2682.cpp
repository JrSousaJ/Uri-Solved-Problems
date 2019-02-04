#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    
    ll n,m=0;
    bool s=true;
    while(scanf("%lld",&n)!=EOF)
    {
        if(n<m)
            s=false;
        else if(n>m && s==true)
            m=n;
        
    }
    printf("%lld\n",m+1);
    return 0;
}