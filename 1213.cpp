#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    while(~scanf("%d",&n))
    {
        int cc=1,ans=1;
        while(ans!=0)
        {
            ans=((ans%n)*(((10%n)%n)%n)+(1%n))%n;
            cc++;
        }
        printf("%d\n",cc);
    } 
   	return 0;
}
