#include<bits/stdc++.h>

using namespace std;


int main()
{
	char s[1011],s1[1011];
	int n;
	scanf("%d",&n);
	while(n--)
	{
		cin >> s >> s1;
		int q=strlen(s);
		bool t=true;
		int q2=strlen(s1);
		
		int c=0,cc=0;
		for(int i=q-q2;i<q;i++)
		{
			
			if(s[i]==s1[c])
			{
				cc++;
			}
			c++;

		}
		if(q2>q)
			printf("nao encaixa\n");
		else if(cc==q2)
		{
			printf("encaixa\n");
		}
		else
		{
			printf("nao encaixa\n");
		}

	}

	return 0;
}



