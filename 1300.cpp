#include<bits/stdc++.h>

using namespace std;

int main()
{
    set<int>n;
    int x;
    int c=0;
    while(1)
    {
    	if(c==186)break;
    	n.insert(c);
    	c+=6;
    }
    while(cin >> x)
    {
    	if(n.find(x)!=n.end())printf("Y\n");
    	else printf("N\n");
    }
	return 0;
}
