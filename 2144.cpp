#include<bits/stdc++.h>

using namespace std;
#define ll long long int
int main()
{
	double m=0;
	int n,n1,n2;
	while(scanf("%d%d%d",&n,&n1,&n2),n!=0 && n1!=0 && n2!=0)
	{
		double meda=(double)(n+n1)/2;
		double ma=n2/30.00;
		double tot=meda*(1+ma);
		m+=tot;
		if(tot>=1 && tot<13)
			printf("Nao vai da nao\n");
		else if(tot>=13 && tot<14)
			printf("E 13\n");
		else if(tot>=14 && tot<40)
			printf("Bora, hora do show! BIIR!\n");
		else if(tot>=40 && tot<=60)
			printf("Ta saindo da jaula o monstro!\n");
		else
			printf("AQUI E BODYBUILDER!!\n");

	}
	printf("\n");
	if(m>40)
		printf("Aqui nois constroi fibra rapaz! Nao e agua com musculo!\n");
	return 0;
}