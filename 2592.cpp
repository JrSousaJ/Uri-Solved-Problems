#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    
   int n;
   while(cin >> n && n!=0)
   {
     
        int c=0;

        while(true)
        {
            bool a=false;
            int n2;
            for(int i=1;i<=n;i++)
            {
                scanf("%d",&n2);
                if(n2!=i)
                {
                    a=true;
                }

            }
            c++;
            if(a==false)
                break;
        }
        printf("%d\n",c);
   }
    return 0;
}