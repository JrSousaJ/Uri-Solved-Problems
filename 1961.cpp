#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,n2;cin >> n >> n2;
    bool q=true;
    int x[n2];
    for(int i=0;i<n2;i++)scanf("%d",&x[i]);
    for(int i=1;i<n2;i++)
    {
    	if(x[i-1]>x[i] && x[i]+n<x[i-1] || x[i-1]<x[i] && x[i-1]+n<x[i])q=false;
    }
    if(!q)printf("GAME OVER\n");
    else printf("YOU WIN\n");

    return 0;
}