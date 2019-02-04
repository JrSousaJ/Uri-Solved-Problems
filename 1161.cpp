#include<bits/stdc++.h>

using namespace std;
unsigned long long n,n2,s;
double fatorial(int m) {  
 	if(n==1 | n==0) 
 		return 1;
    else 
    	return (n*fatorial(n-1));
}

int main()
{
	

	while(scanf("%llu%llu",&n,&n2)!=EOF)
	{	
		s=fatorial(n)+fatorial(n2);
		printf("%llu\n",s);

	}

	return 0;
}



