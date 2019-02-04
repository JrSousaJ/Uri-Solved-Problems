#include<bits/stdc++.h>

using namespace std;

 	const int N = 5000; //quantidade maxima de elementos
     const int K = 5000; //capacidade maxima
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
    int e;
    scanf("%d",&e);
    int aff;
    while(e--)
    {
    	scanf("%d",&n);
    	memset(memo,-1,sizeof(memo));
    	for(int i=0;i<n;i++)
    	{
    		scanf("%d %d",&v[i],&p[i]);
    	}
    	int cc;
    	scanf("%d %d",&k,&cc);
    	int q=mochila(0,k);
    	
    	if(q>=cc)
    		printf("Missao completada com sucesso\n");
    	else
    		printf("Falha na missao\n");
    }


    return 0;
}
