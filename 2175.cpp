#include<bits/stdc++.h>

using namespace std;
#define ll long long int
int main()
{
	double v[3];
	scanf("%lf %lf %lf",&v[0],&v[1],&v[2]);
	map<double, string>m;
	m[v[0]]="Otavio";
	m[v[1]]="Bruno";
	m[v[2]]="Ian";
	sort(v,v+3);
	if(v[0]==v[1])
		printf("Empate\n");
	else
		cout << m[v[0]] << endl ;
	return 0;
}