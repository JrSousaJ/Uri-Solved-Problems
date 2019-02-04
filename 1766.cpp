#include<bits/stdc++.h>

using namespace std;

struct elfin
{
	string nome;
	int peso,idade;
	double altura;
	bool operator <(elfin q)const
	{
		if(peso!=q.peso)return peso>q.peso;
		if(idade!=q.idade)return idade<q.idade;
		if(altura!=q.altura)return altura<q.altura;
		return nome<q.nome;
	}
};
elfin v[100000];
void quack(elfin x[],int e,int d)
{
	int i=e,j=d;
	elfin b=x[(e+d)/2];
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
	int n,f=1;scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		int x,y;scanf("%d%d",&x,&y);
		for(int j=0;j<x;j++)
		{
			cin >> v[j].nome >> v[j].peso >> v[j].idade >> v[j].altura;
		}
		quack(v,0,x-1);
		printf("CENARIO {%d}\n",i);
		for(int j=0;j<y;j++)
		{
			printf("%d - %s\n",j+1,(v[j].nome).c_str());
		}
	}
	
	return 0;
}