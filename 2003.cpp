#include<bits/stdc++.h>

using namespace std;


int main()
{
	int h,m,ans=0;
	while(scanf("%d:%d",&h,&m)!=EOF)
	{
		m+=h*60;
		ans=60-(480-m);
		if(ans<0)
			ans=0;
		printf("Atraso maximo: %d\n",ans);
	}
	return 0;
}



