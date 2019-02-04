#include<bits/stdc++.h>

using namespace std;

int main(){

	int n;
	string s;
	set<string>ae;
	set<string>::iterator it;
	while(scanf("%d",&n)!=EOF)
	{
		for(int i=0;i<n;i++)
		{
			cin >> s;
			ae.insert(s);
		}
		for(it=ae.begin();it!=ae.end();it++)
		{
			cout << *it << endl;
		}
		ae.clear();
	}
	return 0;
}