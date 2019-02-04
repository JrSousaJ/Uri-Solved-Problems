#include<bits/stdc++.h>

const int oo = 0x3f3f3f3f;
using namespace std;

int main()
{
	double n=sqrt(5);
	double ans;

	int n2; cin >> n2;
	double ans1=((1+n)/2);
	double ans2=((1-n)/2);

	ans=(pow(ans1,n2)-pow(ans2,n2))/n;
	printf("%.1lf\n",ans);

	return 0;
}