#include<bits/stdc++.h>

using namespace std;


int main()
{
	int c=0,n,cc=0;
	string s;
	while(cin >> s, s!="ABEND")
	{
		scanf("%d",&n);
		if(s=="SALIDA")
		{
			c+=n;
			cc++;
		}
		else if(s=="VUELTA")
		{
			c-=n;
			cc--;
		}
		
	}
	printf("%d\n%d\n",c,cc);
	return 0;
}



