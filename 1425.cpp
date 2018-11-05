#include<bits/stdc++.h>

using namespace std;
int siz;
vector<int>normal;
vector<int>ord;
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
    int n,m;
    while(~scanf("%d%d",&n,&m))
    {
        if(!n && !m)break;
        if(m>34)printf("Let me try!\n");
        else
        {
            fila q;
            create(&q);
            inserir(&q,1);
            int c=2;
            while(frente(q)!=m && frente(q)>0 && frente(q)<=n)
            {
                int u=frente(q);
                remover(&q);
                if(u<m)
                {
                    if(u+(2*c-1)<=n)u+=2*c-1;
                    else u-=2*c-1;
                    inserir(&q,u);
                }
                else
                {
                    if(u-(2*c-1)>0)
                        u-=2*c-1;
                    else
                        u+=2*c-1;
                    inserir(&q,u);
                }

                c++;
            }
            if(!Empty(q) && frente(q)==m)printf("Let me try!\n",frente(q));
            else printf("Don't make fun of me!\n");
        }

    }
    return 0;
}
