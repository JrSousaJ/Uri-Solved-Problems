#include<bits/stdc++.h>

using namespace std;
int main()
{
	int d,n,m,k;
	scanf("%d %d %d %d",&d,&n,&m,&k);
	if(d & 1 && k&1)printf("%d\n",n+m);
	else if(d & 1 && !(k&1))printf("%d\n",n);
	else if(!(d&1) && k & 1)printf("%d\n",n-m);
	else printf("%d\n",n);

	return 0;
}