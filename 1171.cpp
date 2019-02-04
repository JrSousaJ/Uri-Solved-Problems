#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	map<int, int > ae;
	int n;
	int n2;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d",&n2);
		ae[n2]+=1;
	}
	map<int,int>::iterator it;
	for(it=ae.begin();it!=ae.end();it++)
	{
		cout << it->first << " aparece "<< it->second << " vez(es)" <<  endl;
	}
	

	return 0;
}