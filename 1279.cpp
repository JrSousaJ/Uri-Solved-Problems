#include<bits/stdc++.h>

using namespace std;
int main()
{
	char s[1001];
	int p = 0;
	while(~scanf(" %s",s))
	{
		if(p)printf("\n");
		int bi=0,cem=0,qt=0 , hu=0, bu=0;
		for(int i=0;i<strlen(s);i++)
		{
			bi = (bi * 10 + (s[i]-'0'))%400;
			cem = (cem * 10 + (s[i]-'0'))%100;
			qt = (qt * 10 + (s[i]-'0'))%4;
			hu = (hu * 10 + (s[i]-'0'))%15;
			bu = (bu * 10 + (s[i]-'0'))%55;
		}
		//printf("%d %d %d\n",bi, cem, qt);
		if(!qt && cem || !bi)
		{
			printf("This is leap year.\n");
			if(!hu)printf("This is huluculu festival year.\n");
			if(!bu)printf("This is bulukulu festival year.\n");
		}
		else if(!hu)printf("This is huluculu festival year.\n");
		else printf("This is an ordinary year.\n");
		p=1;
	}
	
	return 0;

}