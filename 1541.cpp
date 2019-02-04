#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    while(cin >> n && n)
    {
        int n2,n3;cin >> n2 >> n3;
        double ans=(double)(((n*n2)*100)/n3);
        printf("%.0lf\n",floor(sqrt(ans)));
    }
    return 0;
}