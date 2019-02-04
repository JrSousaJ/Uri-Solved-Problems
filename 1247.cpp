#include<bits/stdc++.h>

using namespace std;

int main()
{
    double n;
    while(cin >> n)
    {
    	double x,y;cin >> x >> y;
    	double ans=(double)(sqrt(n*n+144));
    	double aa=ans/y;
    	if(aa<=(double)(12/x))printf("S\n");
    	else printf("N\n");
    }

    return 0;
}