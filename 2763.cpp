#include<bits/stdc++.h>

using namespace std;


int main()
{
	char s[100];
	scanf("%[^\n]",s);
	int q=strlen(s);
	for(int i=0;i<q;i++)
	{
		if(s[i]=='.' || s[i]=='-')
			printf("\n");
		else
			printf("%c",s[i]);
		
	}
	printf("\n");
	return 0;
}



