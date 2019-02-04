#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    while(cin >> n && n!=0)
    {
      for(int i=1;i<=n;i++)
      {
        int q=i;
        int c=1;
        for(int j=1;j<=n;j++)
        {
            if(j!=1)printf(" ");
            if(j>=i)printf("%3d",c++);
            else printf("%3d",q--);
        }
        printf("\n");
      }
      printf("\n");

    }
    return 0;
}