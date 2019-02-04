#include<bits/stdc++.h>

using namespace std;

int flavin(int n, int k) {
    int r = 0;
    for (int i = 1; i < n; i++)
        r = (r + k) % i;

    return r;
}
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        int n2,n3;
        scanf("%d%d",&n2,&n3);
        printf("Case %d: %d\n",i,flavin(n2,n3));
    }

    return 0;
}
