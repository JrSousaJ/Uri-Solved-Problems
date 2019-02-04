#include<bits/stdc++.h>
 
using namespace std;
int siz=0;
struct st
{
    int id;
    string ss;
};
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
void push(pilha *s,int d)
{
    siz++;
    struct no *aux;
    aux=(struct no*)malloc(sizeof(struct no));
    if(aux==NULL)return ;
    aux->n=d;
    aux->prox=s->topo;
    s->topo=aux;
}
void pop(pilha *s)
{
    siz--;
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
void reverseStr(string& str)
{
    int n = str.length();
    for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);
}
int topt(pilha s)
{
    struct no *aux = s.topo;
    return aux->n;
}
vector<st>v;
int main()
{
    int n,ans=0;
    pilha p;
    char c;
    create(&p);
    scanf("%d",&n);
    push(&p,-1);
    for(int i=0;i<n;i++)
    {
        string aux;
        for (int j=0;j<4;j++)
        {
            scanf(" %c",&c);
            aux.push_back(c);
        } 
        v.push_back({i,aux});
    }
    for(int i=0;i<n;i++)
    {
        printf("%d\n",siz);
        string rev=v[i].ss;
        reverseStr(rev);
        if(topt(p)==-1 && rev=="FACE")
        {
            ans++;
            pop(&p);
            printf("a%d\n",siz);
        }
        else if(rev == v[topt(p)].ss)
        {
            ans++;
            pop(&p);
        }
        else
        {
            push(&p,v[i].id);
        }
        if(isEmpty(p))
        {
                create(&p);
                push(&p,-1);
        }
    }
    printf("%d\n",ans);
    return 0;
}