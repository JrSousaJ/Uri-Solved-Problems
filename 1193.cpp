#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;cin >>n;
    int c=0;
    while(n--)
    {
        string s,s1;cin >> s >> s1;
        printf("Case %d:\n",c++);
        if(s1=="bin")
        {
            
        }
        int n=(int)atoi(s);
        if(n<0)break;
        if(s[0]=='0' && s[1]=='x')
            {
                istringstream(s)>> hex >> n;
                cout << dec << n << endl;
            }
        else cout << "0x" << hex << uppercase<< n << endl;
    }
   	return 0;
}
