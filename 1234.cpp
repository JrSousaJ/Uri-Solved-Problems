#include<bits/stdc++.h>

using namespace std;

int main(){

		int n;
		string s;
		
		while(getline(cin,s))
		{
			int q=s.size();
			int c=1;
	
			for(int i=0;i<q;i++)
			{
				if(s[i]==' ')
					printf("%c",s[i]);
				else if(s[i]!=' ' && c==1)
				{
					printf("%c",toupper(s[i]));
					c=0;
				}
				else if(s[i]!=' ' && c==0)
				{
					printf("%c",tolower(s[i]));
					c=1;
				}
				

			}
			printf("\n");

		}

		

	return 0;
}