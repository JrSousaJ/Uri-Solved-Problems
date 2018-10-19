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
void push(pilha * s, char d)
{
	struct no *aux;
	aux=(struct no *)malloc(sizeof(struct no));
	if(aux==NULL)return ;
	aux->n=d;
	aux->prox = s->topo;
	s->topo=aux;
}
void pop(pilha *s)
{
	struct no *aux;
	if(s->topo==NULL)return ;
	aux=s->topo;
	s->topo = (s->topo)->prox;
	free(aux);
}
bool isEmpty(pilha s)
{
    if(s.topo==NULL)return true;
    return false;
}
void topt(pilha s,char q[])
{
	struct no *aux = s.topo;
	q[0]=aux->n;
	aux=aux->prox;
	q[1]=aux->n;
	aux=aux->prox;
	q[2]=aux->n;
	aux=aux->prox;
	q[3]=aux->n;
	q[4]='\0';

}
int main()
{
	int n,ans=0;
	pilha p;
	create(&p);
	scanf("%d",&n);
	while(n--)
	{
		char q[10],q2[5];
		scanf(" %[^\n]",q);
		if(isEmpty(p))
        {
				push(&p,'F');
				push(&p,'A');
				push(&p,'C');
				push(&p,'E');
        }
		q2[0]=q[0];
		q2[1]=q[2];
		q2[2]=q[4];
		q2[3]=q[6];
		q2[4]='\0';
		//printf("entrou %s\n",q2);
		topt(p,q);
		//printf("*%s*%s*\n",q,q2);
		if(strcmp(q,q2)==0)
		{
			//printf("deu certo\n");
			pop(&p);
			pop(&p);
			pop(&p);
			pop(&p);
			ans++;
		}
		else
		{
            push(&p,q2[0]);
            push(&p,q2[1]);
            push(&p,q2[2]);
            push(&p,q2[3]);
		}

	}
	printf("%d\n",ans);
	return 0;
}
