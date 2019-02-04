#include<bits/stdc++.h>

using namespace std;
#define ll long long int
int main()
{
	int n;
	int c=1;
	while(cin >> n && n!=0)
	{
		int a=0,b=0;
		for(int i=0;i<n;i++)
		{
			int x,y;scanf("%d%d",&x,&y);
			a+=x;
			b+=y;
		}
		printf("Teste %d\n",c++);
		if(a>b)
			printf("Aldo\n");
		else if(a<b)
			printf("Beto\n");
		printf("\n");
	}
	return 0;
}