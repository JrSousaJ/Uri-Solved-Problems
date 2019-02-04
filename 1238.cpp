#include<bits/stdc++.h>

using namespace std;

int main(){

		char s[53], s1[53];
		int n;
		scanf("%d",&n);
		while(n--)
		{
			cin >> s >> s1;
			int q=strlen(s);
			int q2=strlen(s1);
			if(q>q2)
			{
				for(int i=0;i<q;i++)
				{
					if(i<q2)
					{
						printf("%c%c",s[i],s1[i]);
					}
					else
						printf("%c",s[i]);
				}
				printf("\n");
			}
			else
			{
				for(int i=0;i<q2;i++)
				{
					if(i<q)
					{
						printf("%c%c",s[i],s1[i]);
					}
					else
						printf("%c",s1[i]);
				}
				printf("\n");
			}
				
		}

	return 0;
}