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
	int n,m,z;
	while(~scanf("%d%d%d",&n,&m,&z))
	{
		if(!n && !m && !z)break;
		int vis[n+1][m+1];
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				scanf("%d",&vis[i][j]);
			}
		}
		int v;
		fila q;
		create(&q);
		for(int i=0;i<z;i++)
		{
				scanf("%d",&v);
				inserir(&q,v);
		}
		for(int i=m-1;i>=0;i--)
		{
			for(int j=n-1;j>=0;j--)
			{
				if(vis[j][i]==0 && !Empty(q))
				{
					vis[j][i]=frente(q);
					remover(&q);
				}
			}
		}
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
			    if(!j)printf("%d",vis[i][j]);
				else printf(" %d",vis[i][j]);
			}
			printf("\n");
		}
	}
	return 0;
}
