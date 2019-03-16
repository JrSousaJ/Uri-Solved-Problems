#include<bits/stdc++.h>

using namespace std;

int main()
{
	double n,m,b,v;cin >> n >> m >> b >> v;
	double a = b/n;
	double g=v/m;
	printf("%c\n",(g>=a)? 'G': 'A');
}