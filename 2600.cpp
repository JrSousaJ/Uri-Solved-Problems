#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    signed long long int n,n2,v[10];
    scanf("%lli",&n);
    while(n--)
    {
        scanf("%lli%lli%lli%lli%lli%lli",&v[0],&v[1],&v[2],&v[3],&v[4],&v[5]);
        int aux[10];
        memset(aux,0,sizeof aux);
        bool a=true;
        for(int i=0;i<6;i++)
        {
            if(v[i]<1 || v[i]>6)
                a=false;
            aux[v[i]]++;
           
            if(aux[v[i]]>1)
                a=false;

        }
        if(v[2]+v[4]==7 && v[0]+v[5]==7 && v[1]+v[3]==7 && a==true)
            printf("SIM\n");
        else
            printf("NAO\n");

    }
    return 0;
}