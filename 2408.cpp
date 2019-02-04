#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
   int v[3];
   scanf("%d%d%d",&v[0],&v[1],&v[2]);
   sort(v,v+3);
   printf("%d\n",v[1]);

    return 0;
}