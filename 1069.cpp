#include<bits/stdc++.h>
struct no
{
    int n;
    struct no *prox;
};
struct pilha
{
    struct no *topo;
};
void create(pilha *s)
{
    s->topo=NULL;
}
void push(pilha*s, int d)
{
    struct no *aux;
    aux=(struct no*)malloc(sizeof(struct no));
    if(aux==NULL)return ;
    aux->n=d;
    aux->prox=s->topo;
    s->topo=aux;
}
//void pop(pilha *s, int *d)
void pop(pilha *s)
{
    struct no *aux;
    if(s->topo==NULL)return ;
    aux=s->topo;
    s->topo=(s->topo)->prox;
    //*d=aux->n;
    free(aux);
}

bool isEmpty(pilha s)
{
    if(s.topo==NULL)return true;
    return false;
}


using namespace std;

int main()
{
   char s[10001];
   pilha x;
    int n;scanf("%d",&n);
   while(n--)
   {
       scanf(" %[^\n]",s);
       create(&x);
       int ans=0;
       bool ae=true;
        for(int i=0;i<strlen(s);i++)
        {
            if(s[i]=='<')push(&x,1);
            else if(s[i]=='>' && !isEmpty(x))
            {
                pop(&x);
                ans++;
            }
        }
        printf("%d\n",ans);
   }
    return 0;
}
