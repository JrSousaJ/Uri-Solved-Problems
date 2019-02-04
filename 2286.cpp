#include<bits/stdc++.h>

using namespace std;
#define ll long long int
#define bb int c=0
int main()
{
	int n;
	int cc=1;
	while(cin >> n && n!=0)
	{
		char s[20],s2[20];cin>> s >> s2;
		printf("Teste %d\n",cc++);
		for(int i=0;i<n;i++)
		{
			int x,y;scanf("%d%d",&x,&y);
			if((x+y)%2==0)
				printf("%s\n",s);
			else
				printf("%s\n", s2);
		}
		printf("\n");
	}
	return 0;
}