#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;scanf("%d",&n);
	int v[501][501];
	memset(v,0,sizeof v);
	bool eae=true;
	for(int i=0;i<n;i++)
	{
		int n3,n2;scanf("%d %d",&n3,&n2);
		v[n3][n2]++;
		if(v[n3][n2]>1)
			eae=false;
	}
	if(eae==false)
		printf("1\n");
	else
		printf("0\n");
	return 0;
}
