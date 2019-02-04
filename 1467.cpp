#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,n2,n3;
	while(cin >> n >> n2 >> n3)
	{
		if(n==n2 && n2==n3)printf("*\n");
		else if(n!=n2 && n2==n3)printf("A\n");
		else if(n2!=n && n==n3)printf("B\n");
		else printf("C\n");
	}
    return 0;

}