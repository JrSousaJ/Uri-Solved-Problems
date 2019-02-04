#include<bits/stdc++.h>

using namespace std;
int main()
{
	int n;
	while(cin >> n,n)
	{
		int zer=0,zum=0,ans=0,tot=0;
		for(int i=0;i<n;i++)
		{
			int x;cin >> x;
			if(!x && !zum)
			{
					ans++;
					zer++;
			}
			else if(!x && zum)ans++;
			if(x)
			{
				zum=1;
				tot+=ans/2;
				ans=0;
			}
		}
		if(ans>0)
		{
			tot-=zer/2;
			tot+=(ans+zer)/2;
		}
		printf("%d\n",tot);
	}
    return 0;
}