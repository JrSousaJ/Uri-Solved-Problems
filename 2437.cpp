#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	int n,n2,n3,n4;

	scanf("%d%d%d%d",&n,&n2,&n3,&n4);
	int ans=abs(n-n3)+abs(n2-n4);
	printf("%d\n",ans);
	

	return 0;
}