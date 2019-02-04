#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;cin >> n;
    int v[n][n];
    int l[n],c[n],diag=0,diags=0;
    memset(l,0,sizeof l);
    memset(c,0,sizeof c);
    int m=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&v[i][j]);
            if(v[i][j]>m)m=v[i][j];
            if(i==j)diag+=v[i][j];
            if(j+i==n-1)diags+=v[i][j];
            l[i]+=v[i][j];
            c[j]+=v[i][j];
        }
    }
    if(l[0] == c[0] && l[0]==diag && m==n*n)printf("%d\n",diag);
    else printf("0\n");
    

   	return 0;
}