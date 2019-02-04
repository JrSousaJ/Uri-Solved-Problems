#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll n,n2;scanf("%llu%llu",&n,&n2);
	printf("%llu\n",(n2*(n2+1)-n*(n-1))/2);
    return 0;
}