#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;cin >> n;
	while(n--)
	{
		int t1,t2,t3,t4;

		
		scanf("%d x %d",&t1,&t2);
		scanf("%d x %d",&t3,&t4);
		if(t1+t4>t2+t3)printf("Time 1\n");
		else if(t1+t4<t2+t3)printf("Time 2\n");
		else 
		{
			if(t4<t2)printf("Time 2\n");
			else if(t4>t2)printf("Time 1\n");
			else printf("Penaltis\n");
		}



	}
    return 0;

}