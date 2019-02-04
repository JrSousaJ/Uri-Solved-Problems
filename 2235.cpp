#include<bits/stdc++.h>

using namespace std;


int main()
{
	 int n,n2,n3;
	 scanf("%d%d%d",&n,&n2,&n3);
	 int a1=-n+n2+n3;
	 int a2=-n2+n+n3;
	 int a3=-n3+n+n2;
	 int a4=-n-n2+n3;
	 int a5=-n2-n+n3;
	 int a6=-n3-n+n2;
	 int a7=-n3-n2+n;
	 if(n==n2 || n==n3 || n2==n3)
	 	printf("S\n");
	 else if(a1==0 || a2==0 || a3==0 || a4==0 || a5==0 || a6==0 || a7==0)
	 	printf("S\n");
	 else
	 	printf("N\n");

	return 0;
}



