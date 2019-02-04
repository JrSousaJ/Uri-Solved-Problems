#include<bits/stdc++.h>

using namespace std;
int main()
{
	char s[101];
	scanf(" %[^\n]",s);
	double ans=0,p=0;
	for(int i=0;i<strlen(s);i++)
	{
		if(s[i]=='1' && s[i+1]=='0')
		{
			ans+=10;
			i++;
			p++;
		}
		else
		{
			
			ans+=s[i]-'0';
			p++;
		}

	}
	printf("%.2lf\n",ans/p);

    return 0;
}