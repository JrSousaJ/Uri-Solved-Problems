#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int casos=1;
   
    while(cin >> n)
    {
         vector<int>v;
         v.push_back(0);
        int c=1;
        for(int i=1;i<=n;i++)
        {
            for(int j=0;j<i;j++){v.push_back(i);}
        }
        if(v.size()==1)printf("Caso %d: 1 numero\n%d\n\n", casos++,v[0]);
        else
        {
            printf("Caso %d: %d numeros\n", casos++,(int)v.size());
            printf("%d",v[0]);
            for(int i=1;i<v.size();i++)
            {
                printf(" %d",v[i]);
            }
            printf("\n\n");
        }
    }

    return 0;
}