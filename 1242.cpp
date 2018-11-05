#include <bits/stdc++.h>
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
char topt(pilha s)
{
	struct no *aux = s.topo;
	return aux->n;

}
int main() {
	char s[1000];
	while(~scanf(" %s",s))
	{
		pilha p;
		create(&p);
		int ans=0;
		for(int i=0;i<strlen(s);i++)
		{
			if(isEmpty(p))
			{
				push(&p,s[i]);
			}
			else if(topt(p)=='B' && s[i]=='S' || topt(p)=='S' && s[i]=='B' || topt(p)=='C' && s[i]=='F' || topt(p)=='F' && s[i]=='C')
			{
				pop(&p);
				ans++;
			}
			else push(&p,s[i]);
		}
		printf("%d\n",ans);
	}
	return 0;
}
