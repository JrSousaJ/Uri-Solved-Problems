#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;cin >> n;
	while(n--)
	{
		int x,y;cin >> x >> y;
		string s;

		for(int i=x;i<=y;i++)
		{
			ostringstream str1;
			str1 << i;
			string q=str1.str();
			s+=q;
		}
		cout << s ;
		reverse(s.begin(),s.end());
		cout << s << endl;
	}
    return 0;

}