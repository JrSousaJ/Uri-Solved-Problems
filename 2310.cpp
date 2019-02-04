#include<bits/stdc++.h>

using namespace std;


int main()
{
    int n,n2[3]={0,0,0},n3[3]={0,0,0},som=0,v[3];
    string s;
    scanf("%d",&n);

    while(n--)
    {
        cin >> s;
        for(int i=0;i<6;i++)
        {
            if(i<3)
            {
                 scanf("%d",&v[i]);
                 n2[i]+=v[i];
            }
            else
            {
                scanf("%d",&v[i-3]);
                n3[i-3]+=v[i-3];
            }
            
        }
    }
   
     printf("Pontos de Saque: %.2lf %%.\n",(double)((n3[0]*100.)/n2[0]));
     printf("Pontos de Bloqueio: %.2lf %%.\n",(double)((n3[1]*100.)/n2[1]));
     printf("Pontos de Ataque: %.2lf %%.\n",(double)((n3[2]*100.)/n2[2]));


    return 0;
}
