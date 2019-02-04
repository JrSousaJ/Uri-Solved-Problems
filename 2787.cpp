#include<bits/stdc++.h>

using namespace std;
int pd[50];
int main()
{
    int n,n2;cin >> n >> n2;
    if(n%2==0 && n2%2==0 || n%2==1 && n2%2==1)printf("1\n");
    else printf("0\n");

    return 0;

}