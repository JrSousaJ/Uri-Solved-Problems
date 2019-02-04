#include<bits/stdc++.h>

using namespace std;
#define ll long long int
int main()
{
	char s[1000];
	while(gets(s))
	{
		int i1=0,b=0;
		int q=strlen(s);
		for(int i=0;i<q;i++)
		{
			if(i1==0 && s[i]=='_')
			{
				printf("<i>");
				i1++;
			}
			else if(i1==1 && s[i]=='_')
			{
				printf("</i>");
				i1=0;
			}
			else if(b==0 && s[i]=='*')
			{
				printf("<b>");
				b++;
			}
			else if(b==1 && s[i]=='*')
			{
				b=0;
				printf("</b>");
			}
			else
				cout << s[i];
		}
		printf("\n");
	}
	return 0;
}