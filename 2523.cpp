#include<bits/stdc++.h>

using namespace std;


int main()
{
    int n,n2;
    string s;

    while(cin >> s)
    {
        scanf("%d",&n);
        while(n--)
        {
          scanf("%d",&n2);
          printf("%c",s[n2-1]);
        }
        printf("\n");
    }

   
    
   
    


    return 0;
}
