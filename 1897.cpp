#include<bits/stdc++.h>

using namespace std;
int siz;
struct no
{
	pair<long long int,long long int>n;
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
void inserir(fila *q, pair<long long int,long long int> v)
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
    long long int n,n2;
    while(~scanf("%lld%lld",&n,&n2))
    {
    	set <int>vis;
        int ans=0;
        //memset(vis,0,sizeof vis);
        fila q;
        create(&q);
        inserir(&q,make_pair(n,0));
       
        while(!Empty(q) && frente(q).first!=n2)
        {
            long long int u=frente(q).first;
            long long int ul=frente(q).second;
            remover(&q);
            if(vis.count(u))continue;
            
           vis.insert(u);
           //cout << u << endl;
            inserir(&q,make_pair(u*2,ul+1));
			inserir(&q,make_pair(u*3,ul+1));
           	inserir(&q,make_pair(u/2,ul+1));
            inserir(&q,make_pair(u/3,ul+1));
           	inserir(&q,make_pair(u+7,ul+1));
            inserir(&q,make_pair(u-7,ul+1));
        }
        if(!Empty(q) && frente(q).first==n2)printf("%d\n",frente(q).second);
        
    }
    return 0;
}
