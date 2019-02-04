#include<bits/stdc++.h>

using namespace std;
int main()
{
	int n;
	
	while(~scanf("%d",&n))
	{
		int ep=0,eh=0,in=0;
		for(int i=0;i<n;i++)
		{
			string s,s1;
			cin >> s >> s1;
			if(s1=="EPR")ep++;
			else if(s1=="EHD")eh++;
			else in++;
		}
		
		printf("EPR: %d\n",ep);
		printf("EHD: %d\n",eh);
		printf("INTRUSOS: %d\n",in);
	}
    return 0;
}