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
pair<int,int> top(fila q)
{
	return q.inicio->n;
}
int reverser(int n)
{
	int rev=0;
	while(n>0)
	{
		rev=rev*10+n%10;
		n/=10;
	}
	return rev;
}
int vis[11000];
int main()
{
    int n;scanf("%d",&n);
    while(n--)
    {
    	int x,y;scanf("%d%d",&x,&y);
    	memset(vis,-1,sizeof vis);
        fila q;
        create(&q);
        inserir(&q,make_pair(x,0));
        int ans=0;
        vis[x]=0;
        if(x!=y)
        {
                 while(!Empty(q))
                {

                    int u=top(q).first;
                    int ul=top(q).second;
                    remover(&q);
                    int a=u+1;
                    int b=reverser(u);
                    if(a>11000 || b > 11000)continue;
                    if(a==y || b==y)
                    {
                            ans=ul+1;
                            break;
                    }
                    else
                    {
                        if(vis[a]==-1)
                        {
                            vis[a]=0;
                            inserir(&q,make_pair(a,ul+1));
                        }
                        if(vis[b]==-1)
                        {
                            vis[b]=0;
                            inserir(&q,make_pair(b,ul+1));
                        }
                    }


                }

        }
        printf("%d\n",ans);

    }
    return 0;
}
