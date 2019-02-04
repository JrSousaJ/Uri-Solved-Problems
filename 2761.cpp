#include<bits/stdc++.h>

using namespace std;


int main()
{
	int n;
	float n2;
	char c;
	char s[60];
	scanf("%d %.6f %c %[^\n]",&n,&n2,&c,s);
	printf("%d%f%c%s\n",n,n2,c,s );
	printf("%d\t%.6f\t%c\t%s\n",n,n2,c,s );
	printf("%d          %.6f          %c          %s\n",n,n2,c,s );
	return 0;
}



