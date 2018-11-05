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
int frente(fila q)
{
	return q.inicio->n;
}
int main()
{
    int n;
    while(~scanf("%d",&n))
    {
        fila q;
        create(&q);
        int ans=1;
        inserir(&q,2);//simular com 1 carta só e como já tivesse sido embaralhado uma vez
        while(frente(q)!=1)
        {
            int u=frente(q);
            remover(&q);
            int dv=n/2;
            if(u<=dv)
            {
                u+=u;
                inserir(&q,u);
            }
            else
            {
                u-=(n-u+1);
                inserir(&q,u);
            }

            ans++;
        }


        printf("%d\n",ans);
    }
    return 0;
}
