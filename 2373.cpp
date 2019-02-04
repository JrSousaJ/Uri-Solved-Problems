#include<bits/stdc++.h>

using namespace std;
#define ll long long int
#define bb int c=0
int main()
{
	int n;cin >> n;
	bb;
	while(n--)
	{
		int x,y;cin >> x >> y;
		if(x>y)
			c+=y;
	}
	printf("%d\n",c);
	
	return 0;
}