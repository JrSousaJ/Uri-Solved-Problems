#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s, o, s1;
    cin >> s >> o >> s1;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='7')s[i]='0';
    }
    for(int i=0;i<s1.size();i++)
    {
        if(s1[i]=='7')s1[i]='0';
    }
    stringstream f;
    stringstream h;
    long long int b, a, ans;
    b=a=ans=0;
    f << s;
    f >> a;
    h << s1;
    h >> b;
    if(o=="+")
        ans=b+a;
    else
        ans=b*a;
    string aux;
    while(ans>0)
    {
        char x=(ans%10)+48;
        if(x=='7')x='0';
        aux+=x;
        ans/=10;
    }
    reverse(aux.begin(),aux.end());
    stringstream bud;
    long long int val;
    bud << aux;
    bud >> val;
    printf("%lld\n",val);

    return 0;
}
