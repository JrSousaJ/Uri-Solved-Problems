#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    while(scanf("%d",&n),n)
    {
    	int ans=0;
    	int fat[]={1,2,6,24,120},cc=0;
    	while(n!=0)
    	{
    		int q=n%10;
    		n=n/10;
    		ans+=q*fat[cc++];
    	}
    	printf("%d\n",ans);
    }
   	return 0;
}
