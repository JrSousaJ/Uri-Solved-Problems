#include<bits/stdc++.h>

using namespace std;

int main()
{
   int n,n2,n3,r,a;
   cin >> n >> n2 >> n3 >> r >> a;
   int som=n2+n3;
   int sera=0;
	if (som%2==0)sera = 0;
	else sera = 1; 

   if(n == 1 && sera == 0 && r ==0 && a==0)printf("Jogador 1 ganha!\n");
	else if (n == 0 && sera == 1 && r ==0 && a ==0 )printf("Jogador 1 ganha!\n");
	else if (r ==1 && a ==0)printf("Jogador 1 ganha!\n");
	else if (r == 1 && a == 1)printf("Jogador 2 ganha!\n");
	else if (n==1 && sera == 1 && r ==0 && a==0)printf("Jogador 2 ganha!\n");
	else if (n==0 && sera ==0 && r ==0 && a==0)printf("Jogador 2 ganha!\n");
	else if (r ==0 && a ==1)printf("Jogador 1 ganha!\n");

   	return 0;
}
