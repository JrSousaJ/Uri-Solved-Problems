#include<bits/stdc++.h>

using namespace std;

int main()
{
  	int n[4];scanf("%d%d%d%d",&n[0],&n[1],&n[2],&n[3]);
  	sort(n,n+4);
  	int a=n[0]+n[3];
  	int b=n[1]+n[2];
  	cout << abs(b-a) << endl;

   	return 0;
}
