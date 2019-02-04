#include<bits/stdc++.h>

using namespace std;
#define ll long long int
#define bb int c=0
int main()
{
	int n;cin >> n;
	if(n==0)
		printf("E\n");
	else if(n>0 && n<=35)
		printf("D\n");
	else if(n>35 && n<=60)
		printf("C\n");
	else if(n>60 && n<=85)
		printf("B\n");
	else
		printf("A\n");
	return 0;
}