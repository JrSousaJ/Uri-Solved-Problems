#include<bits/stdc++.h>

using namespace std;
vector<string>s;
int main()
{
	int n,n2;
	while(cin >> n >> n2)
	{
		int v[4];
		int som=0;
		for(int i=n;i<=n2;i++)
		{

			int q=i;
			int c=0;
			int acho=0;
			while(q!=0)
			{
				v[c++]=q%10;
				q=q/10;
			}
			for(int i=0;i<c;i++)
			{
				for(int j=i+1;j<c;j++)
				{
					if(v[i]==v[j])
						{
							acho=1;
							break;
						}
				}
			}
			if(acho==0)som++;
		}
		printf("%d\n",som);
	}
   	return 0;
}
