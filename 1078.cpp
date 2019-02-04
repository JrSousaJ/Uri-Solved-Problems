#include<bits/stdc++.h>

using namespace std;

void tab(int m,int n)
{
    if(m==0)
        return ;
   tab(m-1,n);
   printf("%d x %d = %d\n",m,n,m*n);
}
int main()
{
    int n;scanf("%d",&n);
    int c=10;
    tab(c,n);

    return 0;
}
