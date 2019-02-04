#include <bits/stdc++.h>
     
using namespace std;
string s,s1;
int n,n2;
const int MAX=5050;
int memo[MAX][MAX];
int pd(int i,int j)
{
    if(i==n || j==n2)return 0;
    if(memo[i][j]!=-1)return memo[i][j];
    if(s[i]==s1[j])return memo[i][j] = 1+pd(i+1,j+1);

    return memo[i][j]=max(pd(i,j+1),pd(i+1,j));
}
int main()
{
    cin >> s >> s1;
    n=s.size();
    n2=s1.size();
    memset(memo,-1,sizeof memo);
    cout << pd(0,0) << endl;

   	return 0;
}