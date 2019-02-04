#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	int n,n3;
	char s;
	int ans=0;
	scanf("%d %c %d",&n,&s,&n3);
	if(s=='+' && n+n3==7)
	{
		printf("0\n");
	}
	else if(s=='+')
		ans=n+n3;
	else if(s=='x')
		ans=n*n3;
	char s1[1000];
	sprintf(s1,"%d",ans);
	for(int i=0;i<strlen(s1);i++)
	{
		if(s1[i]!='7')
			printf("%c",s1[i]);
	}
	return 0;
}