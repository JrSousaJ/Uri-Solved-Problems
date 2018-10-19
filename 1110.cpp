#include<bits/stdc++.h>

using namespace std;
int siz;
struct no
{
	int n;
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
void inserir(fila *q, int v)
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
int top(fila q)
{
	return q.inicio->n;
}

int main()
{
    int n;
    while(scanf("%d",&n),n)
    {
        fila q;
        create(&q);
        for(int i=1;i<=n;i++)
        {
            inserir(&q,i);
        }
        printf("Discarded cards: ");
        while(siz>1)
        {
                if(siz!=2)printf("%d, ",top(q));
                else printf("%d\n",top(q));
                remover(&q);
                inserir(&q,top(q));
                remover(&q);
        }
        printf("Remaining card: %d\n",top(q));
    }
    return 0;
}
