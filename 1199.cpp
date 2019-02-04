#include<bits/stdc++.h>

using namespace std;

int main()
{
    
    char s[1000];
    while(cin >> s)
    {
        long long int n= atoi(s);
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
