#include<bits/stdc++.h>

using namespace std;
#define ll long long int
int main()
{
	int q;cin >> q;
	int x,y;
	char s;
	scanf("%d %c %d",&x,&s,&y);
	if(s=='+' && x+y>q || s=='*' && x*y>q)
		printf("OVERFLOW\n");
	else
		printf("OK\n");
	return 0;
}