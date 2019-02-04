#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int n;scanf("%d",&n);
    int n2,n3;scanf("%d%d",&n2,&n3);
    int n4,n5;scanf("%d%d",&n4,&n5);
    if(n>=n2 && n<=n3 && n>=n4 && n<=n5)
    	printf("possivel\n");
    else
    	printf("impossivel\n");
    return 0;
}