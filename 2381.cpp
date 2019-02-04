#include<bits/stdc++.h>

using namespace std;

int main()
{
   int n,n2;scanf("%d%d",&n,&n2);
   vector<string>s;
   for(int i=0;i<n;i++)
   {
        string a;cin>> a;
        s.push_back(a);
   }    
   sort(s.begin(),s.end());
    cout << s[n2-1] << endl;
    return 0;
}