#include <bits/stdc++.h>
using namespace std;
int siz=0;
struct est
{
	int id;
	int entr,said;
};
vector<est>v;
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
int top(pilha s)
{
	struct no *aux=s.topo;
	return aux->n;

}
int main()
{
	int n,n2;
	while(~scanf("%d%d",&n,&n2))
	{

		if(!n && !n2)break;
		v.clear();
		pilha p;
		create(&p);
		for(int i=0;i<n;i++)
		{
			int entr,said;scanf("%d%d",&entr,&said);
			v.push_back({i,entr,said});
		}
		int c=0;
		bool se=true;
		for(int i=0;i<v.size();i++)
		{
			c=0;
			while(!isEmpty(p) && v[i].entr>= v[top(p)].said)
            		{
				(v[top(p)].said >= c && se)? se=true: se=false;
				c=v[top(p)].said;
				pop(&p);
            		}
		  	(siz<n2 && se)? se=true: se=false;
		  	push(&p,v[i].id);
		}
		c=0;
		while(!isEmpty(p))
        	{
		    (v[top(p)].said >= c && se)? se=true: se=false;
		    c=v[top(p)].said;
		    pop(&p);
       		}
		if(!se)printf("Nao\n");
		else printf("Sim\n");
	}
	return 0;
}
