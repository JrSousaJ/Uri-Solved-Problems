#include<bits/stdc++.h>
using namespace std;
#define ll long long int

struct me
{
    string nome;
    char p;
    int n;
    bool operator<(me y)const
    {
        if(n!=y.n)
            return n<y.n;
        if(p!=y.p)
            return p<y.p;
        return nome < y.nome;

    }
    
};

char nom[8000];
me van[800];
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        for(int i=0;i<n;i++)
        {
             scanf(" %s %c %d",nom,&van[i].p,&van[i].n);
             van[i].nome=nom;
        }
        sort(van,van+n);
        for(int i=0;i<n;i++)
        {
            printf("%s\n",(van[i].nome).c_str());
        }
       
    }
    return 0;
}