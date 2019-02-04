#include<bits/stdc++.h>

using namespace std;


int main()
{
	char s[10000];
	scanf("%[^\n]",s);
	int q=strlen(s);
	for(int i=0;i<q;i++)
	{
		if(s[i]==',')
		{
			printf("\n");
		}
		else
		{
			printf("%c",s[i]);
		}
	}
	printf("\n");
	return 0;
}



