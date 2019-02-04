#include<bits/stdc++.h>

using namespace std;

int main(){

		int n;
		char s[400];
		scanf("%d",&n);
		getchar();
		while(n--)
		{
			gets(s);
			
			int q=(strlen(s)/2)-1;
			
			int q2=strlen(s);
			for(int i=q;i>=0;i--)
			{
				printf("%c",s[i]);
			}
			
			for(int i=q2-1;i>=q+1;i--)
			{
				printf("%c",s[i]);
			}
			printf("\n");
		}

		

	return 0;
}