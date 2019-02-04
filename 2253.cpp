#include<bits/stdc++.h>

using namespace std;

int main()
{
	char s[20000];
	while(scanf(" %[^\n]",s)!=EOF)
	{
		bool ma=false,mi=false,n=false,esp=false;
		int q=strlen(s);
		if(q<6 || q>32)printf("Senha invalida.\n");
		else 
		{
			for(int i=0;i<q;i++)
			{
				if(s[i]>=48 && s[i]<=57)n=true;
				else if(s[i]>=65 && s[i]<=90)ma=true;
				else if(s[i]>=97 && s[i]<=122)mi=true;
				else esp=true;
			}
			if(n==true && ma==true && mi==true && esp==false)printf("Senha valida.\n");
			else printf("Senha invalida.\n");
		}
	}
    return 0;

}