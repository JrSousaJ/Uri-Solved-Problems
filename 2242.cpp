#include<bits/stdc++.h>

using namespace std;

int main()
{
    
    string s;cin >> s;
    vector<char>c1;
    vector<char>c2;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
        {
            c1.push_back(s[i]);
            c2.push_back(s[i]);
        }
    }
    reverse(c2.begin(),c2.end());
    bool q=true;
    for(int i=0;i<c1.size();i++)
    {
        if(c1[i]!=c2[i])
        {
            q=false;
            break;
        }
    }
    (q)? cout << "S\n" : cout << "N\n";

   	return 0;
}
