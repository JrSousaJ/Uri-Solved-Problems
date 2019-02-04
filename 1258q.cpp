#include<bits/stdc++.h>

using namespace std;

struct camisetas
{
	string nome,cor;
	char tam;
	bool operator <(camisetas q)const
	{
		if(cor!=q.cor)return cor<q.cor;
		if(tam!=q.tam)return tam>q.tam;
		return nome<q.nome;
	}
};
camisetas v[100];
void quack(camisetas x[],int e,int d)
{
	int i=e,j=d;
	camisetas b=x[(e+d)/2];
	do
	{
		while(x[i]<b && i<d)i++;
		while(b<x[j] && j>e)j--;
		if(i<=j)
		{
			swap(x[i],x[j]);
			i++,j--;
		}
	}while(i<=j);
	if(e<j)quack(x,e,j);
	if(i<d)quack(x,i,d);

}
int main()
{
	int n,f=1;
	while(scanf("%d",&n),n)
	{
		if(f)f=0;
		else printf("\n");
		for(int i=0;i<n;i++)
		{
			char q[10000],q2[10000],x;
			scanf(" %[^\n]",q);
			cin >> q2 >> x;
			v[i].nome=q;
			v[i].cor=q2;
			v[i].tam=x;

		}
		quack(v,0,n-1);
		for(int i=0;i<n;i++)
		{
			cout << v[i].cor << " " << v[i].tam << " " << v[i].nome << endl;
		}
	}

	
	return 0;
}