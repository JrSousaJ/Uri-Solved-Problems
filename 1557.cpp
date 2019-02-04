#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    while(cin >> n && n!=0)
    {
        long long int v[n][n];
        if(n==1)printf("1\n");
        else
        {
            int c=1;
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++)
                {
                    v[i][j]=c;
                    c*=2;
                }
                c=v[i][1];
            }
            stringstream ss;
            ss << v[n-1][n-1];
            string str = ss.str();
            int q=str.size();
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++)
                {
                    if(j==0)printf("%*lld",q,v[i][j]);
                    else printf(" %*lld",q,v[i][j]);
                }
                printf("\n");
            }

        }
        printf("\n");

    }
    return 0;
}