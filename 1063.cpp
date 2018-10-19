#include<bits/stdc++.h>
using namespace std;


struct no
{
    char n;
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
void push(pilha *s, char d)
{
    struct no *aux;
    aux=(struct no*)malloc(sizeof(struct no));
    if(aux==NULL)return ;
    aux->n=d;
    aux->prox=s->topo;
    s->topo=aux;
}
void pop(pilha *s)
{
    struct no *aux;
    if(s->topo==NULL)return ;
    aux=s->topo;
    s->topo=(s->topo)->prox;
    free(aux);
}
bool isEmpty(pilha s)
{
    if(s.topo==NULL)return true;
    return false;
}
char topt(pilha s)
{
    struct no *aux = s.topo;
    return aux->n;
}

int main()
{
    int x;
    while(scanf("%d",&x),x)
    {
        getchar();
        pilha p;
        create(&p);
        char c;
        string entr,said;
        for(int i=0;i<x;i++)
        {
            scanf(" %c",&c);
            entr.push_back(c);
        }
        for(int i=0;i<x;i++)
        {
            scanf(" %c",&c);
            said.push_back(c);
        }
        int cz=0,i=0;
        //achei engraçada essa condição e quis aderir kkkkkkkkkkkk
        while(!false)
        {
            if(i<x && !isEmpty(p) && topt(p)==said[i])
            {
                pop(&p);
                printf("R");
                i++;
            }
            else if(cz<x)
            {
               
                push(&p,entr[cz]);
                printf("I");
                 cz++;
                
            }
            else break;
        }
        if(!isEmpty(p))printf(" Impossible\n");
        else printf("\n");
    }
    return 0;
}
