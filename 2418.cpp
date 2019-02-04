#include<bits/stdc++.h>

using namespace std;

int main(){
	double v[5];
	double som=0;
	for(int i=0;i<5;i++)
	{
		scanf("%lf",&v[i]);
	}
	sort(v,v+5);
	v[0]=0;
	v[4]=0;
	for(int i=0;i<5;i++)
	{
		som+=v[i];
	}
	printf("%.1lf\n",som);
}