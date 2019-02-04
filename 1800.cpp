#include<bits/stdc++.h>

using namespace std;
int main()
{
	int n,n2;cin >> n >> n2;
	set<int>conj;
	while(n2--)
	{
		int x;cin >> x;
		conj.insert(x);
	}
	while(n--)
	{
		int x;cin >> x;
		if(conj.find(x)==conj.end())
		{
				printf("1\n");
				conj.insert(x);
		}
		else printf("0\n");

	}

    return 0;
}