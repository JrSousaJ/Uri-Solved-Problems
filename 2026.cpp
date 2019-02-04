#include<bits/stdc++.h>

using namespace std;

    const int N = 302; //quantidade maxima de elementos
    const int K = 1001; //capacidade maxima
    int n;
    int k;
    int p[N];
    int v[N];
    int memo[N][K];
int mochila(int pos,int cap)
{
    if(pos == n)
        return 0;
    if(memo[pos][cap] != -1)
        return memo[pos][cap];
    int naopega=mochila(pos+1,cap);
    int pega=-1;
    if(p[pos]<=cap)
    {
        pega=mochila(pos+1,cap-p[pos])+v[pos];
    }
    return memo[pos][cap]=max(pega,naopega);
}

int main()
{
    int j;
    scanf("%d",&j);

    for(int z=0;z<j;z++){
        scanf("%d %d",&n,&k);
        memset(memo,-1,sizeof(memo));
        for(int i=0;i<n;i++){
            scanf("%d %d",&v[i],&p[i]);
        }
        printf("Galho %d:\nNumero total de enfeites: %d\n\n",z+1,mochila(0,k));
    }
}
