#include<bits/stdc++.h>
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
void push(pilha*s, int d)
{
    struct no *aux;
    aux=(struct no*)malloc(sizeof(struct no));
    if(aux==NULL)return ;
    aux->n=d;
    aux->prox=s->topo;
    s->topo=aux;
}
//void pop(pilha *s, int *d)
void pop(pilha *s)
{
    struct no *aux;
    if(s->topo==NULL)return ;
    aux=s->topo;
    s->topo=(s->topo)->prox;
    //*d=aux->n;
    free(aux);
}

bool isEmpty(pilha s)
{
    if(s.topo==NULL)return true;
    return false;
}
int topt(pilha s)
{
    struct no *aux = s.topo;
    return aux->n;
}
using namespace std;

int main()
{
  	int n;
  	while(scanf("%d",&n),n)
  	{
  		int x;
  		vector<int>v;
  		while(scanf("%d",&x),x)
  		{
  			int ax;
  			v.push_back(x);
  			for(int i=1;i<n;i++)
  			{
  				scanf("%d",&ax);
  				v.push_back(ax);
  			}
  		
	  		pilha p;
	  		create(&p);
	  		int c=0;
	  		for(int i=1;i<=n;i++)
	  		{
	  			push(&p,i);
	  			while(!isEmpty(p) && v[c]==topt(p))
	  			{
	  				c++;
	  				pop(&p);
	  			}
	  		}
	  		if(isEmpty(p))printf("Yes\n");
	  		else printf("No\n");
	  		v.clear();
  		}
  		printf("\n");
  		
  	}
    return 0;
}
