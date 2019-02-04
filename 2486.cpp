#include<bits/stdc++.h>

using namespace std;


int main()
{
	int n,n2;
	char s[2000];
	string aux;
	while(scanf("%d",&n),n!=0)
	{
		int c=0;
		for(int i=0;i<n;i++)
		{
			scanf("%d %[^\n]",&n2,s);
			aux=s;
			if(aux=="suco de laranja")
				c+=120*n2;
			else if(aux=="morango fresco" || aux=="mamao")
				c+=85*n2;
			else if(aux=="goiaba vermelha")
				c+=70*n2;
			else if(aux=="manga")
				c+=56*n2;
			else if(aux=="laranja")
				c+=50*n2;
			else if(aux=="brocolis")
				c+=34*n2;
		}
		if(c>=110 && c<=130)
			printf("%d mg\n",c);
		else if(c>130)
			printf("Menos %d mg\n",c-130);
		else if(c<110)
			printf("Mais %d mg\n",110-c);
		
	}
	return 0;
}



