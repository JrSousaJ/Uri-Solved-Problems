#include<bits/stdc++.h>

const int oo = 0x3f3f3f3f;
using namespace std;
#define ll long long int
int main()
{
	int v[5],aux[5];
	for(int i=0;i<5;i++)
	{
		 scanf("%d",&v[i]);
		 aux[i]=v[i];
	}
	sort(aux,aux+5);
	int c=1;
	for(int i=0;i<5;i++)
	{

		if(v[i]==aux[i])
			c++;
	}
	if(c==6)
		printf("C\n");
	else
	{
		c=1;
		for(int i=4;i>=0;i--)
		{
			
			if(aux[i]==v[4-i])
				c++;
		}
		if(c==6)
			printf("D\n");
		else
			printf("N\n");
	}
	return 0;
}