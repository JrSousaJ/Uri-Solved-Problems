#include <bits/stdc++.h>
     
using namespace std;
int main()
{
    int n[3];
    while(~scanf("%d%d%d",&n[0],&n[1],&n[2]))
    {
        int p=__gcd(n[0],n[1]);
        int p2=__gcd(n[1],n[2]);
        int p3=__gcd(n[0],n[2]);
        sort(n,n+3);
        int ans=n[2]*n[2];
        if(ans==pow(n[0],2)+pow(n[1],2))
        {
             if(p==p2 && p==p3 && p==1)printf("tripla pitagorica primitiva\n");
             else printf("tripla pitagorica\n");
        }
        else printf("tripla\n");
    }
   	return 0;
}