#include<bits/stdc++.h>

using namespace std;
map<int,int>m;
map<int,int>::reverse_iterator it;
int main()
{
	 int n;
	 string s;
	 while(cin >> s)
	 {
	 	for(int i=0;i<s.size();i++)
	 	{
	 		n=s[i];
	 		m[n]++;
	 	}
	 	for(it=m.rend();it!=m.rbegin();it--)
	 	{
	 		
	 		cout << it->first << " " <<it->second << endl;
	 	}
	 	m.clear();
	 }
   	return 0;
}
