#include <bits/stdc++.h>
     
using namespace std;
string s,s1;
int n,n2;
int memo[1100][1100];
int lcs(int i,int j)
{
    if(i==n || j==n2)return 0;
    if(memo[i][j]!=-1)return memo[i][j];
    if(s[i]==s1[j])return memo[i][j]=1+lcs(i+1,j+1);
    return memo[i][j]=max(lcs(i,j+1),lcs(i+1,j));
}
int main()
{
    cin >> s >> s1;
    n=s.size();
    n2=s1.size();
    memset(memo,-1,sizeof memo);
    int ans=lcs(0,0);
    int a=abs(n-ans);
    int b=abs(n2-ans);
    cout << ans+a+b << endl;
   	return 0;
}