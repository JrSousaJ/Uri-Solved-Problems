#include<bits/stdc++.h>

using namespace std;
#define ll long long int
int main()
{
	double n;cin >> n;
	int c=1;
	while(n>=2)
	{
		n/=2;
		c*=4;
	}
	printf("%d\n",c);
	return 0;
}