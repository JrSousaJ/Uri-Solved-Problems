#include<bits/stdc++.h>

const int oo = 0x3f3f3f3f;
using namespace std;

int main()
{
	int n;
	while(cin >> n)
	{
		double med=0;
		for(int i=1;i<=n;i++)
		{
			double n2,n3;scanf("%lf%lf",&n2,&n3);
			double test=(double)(n3/n2);
			
			if(test>med)
			{
				printf("%d\n",i);
				med=test;
			}
		}
		
	}
	return 0;
}