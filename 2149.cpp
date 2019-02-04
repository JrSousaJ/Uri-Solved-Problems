#include<bits/stdc++.h>

using namespace std;


int main()
{
	int n;
	
	while(scanf("%d",&n)!=EOF)
	{
		long long int q=0;
		long long int ant=1;
		long long int ans=1;
		long long int tot=0;
		if(n==1)
			printf("0\n");
		else if(n==2 || n==3 || n==4)
			printf("1\n");
		
		else
		{
			for(int i=3;i<n-1;i++)
			{
				if(i%2==1)
				{
					q=ant+ans;
					ant=ans;
					ans=q;
				}
				else 
				{
					q=ant*ans;
					ant=ans;
					ans=q;
				}
				tot+=q;
			}
			printf("%lld\n",q);
		}
		
	}


	return 0;
}