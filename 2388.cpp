#include<bits/stdc++.h>

using namespace std;
#define ll long long int
int main()
{
	int n;cin >> n;
	int tot=0;
	while(n--)
	{
		int n2,n3;scanf("%d%d",&n2,&n3);
		tot+=n2*n3;
	}
	printf("%d\n",tot);
	return 0;
}