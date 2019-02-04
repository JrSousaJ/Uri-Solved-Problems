#include<bits/stdc++.h>

using namespace std;
int v[N];
int seg[];//4*N;
void build(int idx,int l,int r)
{
	if(l==r)seg[idx]=v[l];
	else
	{
		int m=(l+r)/2;
		build(idx*2,l,m);
		build(idx*2+1,m+1,r);
		seg[idx]=seg[idx*2]+seg[idx*2+1];
	}
}
int query(int l,int r, int idx,int a, int b)
{
	if(l>b || r<a)return 0;
	else if(l>=a && r<=b)return seg[idx];
	else
	{
		int m=(l+r)/2;
		int r=query(l,m,idx*2,a,b);
		int r1=query(m+1,r,idx*2+1,a,b);
		return r+r1;/*Query para soma, se fosse pra multiplicação eu teria que mudar o sinal na build e o return ao invés de ser 0, 
					trocar para 1 para nao zerar as respostas e mudar o sinal de mais para multiplicação*/
	}
}
void update(int l,int r,int idx,int p,int v)
{
	if(l>p || r<p)
		return ;
	else if(l==r)
	{
		seg[idx]=v;
		return ;
	}
	int m=(l+r)/2;
	update(l,m,idx*2,p,v);
	update(m+1,r,idx*2+1,p,v);
	seg[idx]=seg[idx*2]+seg[idx*2+1];
}
int main()
{
	//build(1,0,N-1);

	return 0;
}