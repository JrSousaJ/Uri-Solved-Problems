#include<bits/stdc++.h>

using namespace std;


int main()
{
	string s;
	set<string>s1;
	while(cin >> s)
	{
		s1.insert(s);
	}
	long long int q= s1.size();
	printf("%lld\n",q);
	return 0;
}



