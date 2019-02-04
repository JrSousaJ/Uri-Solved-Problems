#include<bits/stdc++.h>

using namespace std;
//matriz de adjacência aguenta até 10^8



int main()
{
	int n[3],n2[3];
	for(int i=0;i<3;i++)
	{
		scanf("%d",&n[i]);
	}
	for(int i=0;i<3;i++)
	{
		scanf("%d",&n2[i]);
	}
	int a=n[0]-n2[0];
	int b=n[1]-n2[1];
	int c=n[2]-n2[2];
	int ans=0;
	if(a<0)
		ans+=(a*-1);
	if(b<0)
		ans+=(b*-1);
	if(c<0)
		ans+=(c*-1);
	printf("%d\n",ans);


	return 0;
}




