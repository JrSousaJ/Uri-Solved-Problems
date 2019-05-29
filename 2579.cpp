#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n,m;scanf("%d%d",&n,&m);
    int x,y;scanf("%d%d",&x,&y);
    long long int ans = x * m + y+1;
    (ans%2)? printf("Direita\n") : printf("Esquerda\n");
   
    return 0;
}