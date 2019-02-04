#include<bits/stdc++.h>

using namespace std;

int main()
{
  	int v[30];
  	v[0]=1;
  	for(int i=1;i<30;i++)
  	{
  		v[i]=v[i-1]*2+1;
  	}
  	int x,c=1;
  	while(scanf("%d",&x),x)
  	{
  		printf("Teste %d\n",c++);
  		printf("%d\n\n",v[x-1]);
  	}
   	return 0;
}
