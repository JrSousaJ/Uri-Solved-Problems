#include<bits/stdc++.h>

using namespace std;
int siz;
struct no
{
	pair<int,int>n;
	struct no *prox;
};
typedef struct
{
	struct no *inicio;
	struct no *fim;
}fila;
void create(fila *q)
{
	siz=0;
	q->inicio=NULL;
	q->fim=NULL;
}
void inserir(fila *q, pair<int,int> v)
{
    siz++;
	struct no *aux;
	aux=(struct no *)malloc(sizeof(struct no));
	if(aux==NULL)return ;
	aux->n=v;
	aux->prox=NULL;
	if(q->inicio==NULL)q->inicio=aux;
	if(q->fim!=NULL)q->fim->prox=aux;
	q->fim=aux;
}
bool Empty(fila q)
{
	if(q.inicio==NULL && q.fim==NULL)return true;
	return false;
}
void remover(fila *q)
{
    siz--;
	struct no *aux;
	if(q->inicio==NULL)return ;
	aux=q->inicio;
	q->inicio=aux->prox;
	if(q->inicio==NULL)q->fim=NULL;
	free(aux);
}
pair<int,int> frente(fila q)
{
	return q.inicio->n;
}
int main()
{
    int n,n2,n3;
    while(~scanf("%d%d%d",&n,&n2,&n3))
    {
        if(!n && !n2 && !n3)break;
    	set <int>nop;
    	for(int i=0;i<n3;i++)
        {
            int x;scanf("%d",&x);
            nop.insert(x);
        }
        int vis[400000];
        int ans=0;
        memset(vis,0,sizeof vis);
        fila q;
        create(&q);
        inserir(&q,make_pair(n,0));

        while(!Empty(q) && frente(q).first!=n2)
        {
            int u=frente(q).first;
            int ul=frente(q).second;
            remover(&q);
            if(vis[u]==1 || nop.count(u))continue;
            vis[u]=1;
            if(u>0 && u<=100000)
            {
                 inserir(&q,make_pair(u+1,ul+1));
                if(u>0)inserir(&q,make_pair(u-1,ul+1));
                if(u%2==0)inserir(&q,make_pair(u/2,ul+1));
                if(u!=55000)
                {
                     inserir(&q,make_pair(u*2,ul+1));
                    inserir(&q,make_pair(u*3,ul+1));
                }
            }


        }
        if(!Empty(q) && frente(q).first==n2)printf("%d\n",frente(q).second);
        else printf("-1\n");
    }
    return 0;
}
