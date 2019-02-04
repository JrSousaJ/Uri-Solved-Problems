#include<bits/stdc++.h>

const int oo = 0x3f3f3f3f;
using namespace std;
#define lf long double
int main()
{
	lf n,n2;
	int c=1;
	while(~scanf("%Lf %Lf",&n,&n2))
	{
		printf("Projeto %d:\n",c++);
		printf("Percentual dos juros da aplicacao: %.2Lf %%\n\n",(n2-n)/(n*0.01));
	}
	return 0;
}