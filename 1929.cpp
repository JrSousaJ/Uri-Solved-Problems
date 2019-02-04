#include<bits/stdc++.h>

using namespace std;

int main()
{
    int v[4];
    for(int i=0;i<4;i++)scanf("%d",&v[i]);
    sort(v,v+4);
    bool q=false;
    do
    {

        if(v[0]<v[1] + v[2] && abs(v[1]-v[2])<v[0])
        {
            if(v[1]<v[0]+v[2] && abs(v[0]-v[2])<v[1])
            {
                if(v[2]<v[0]+v[1] && abs(v[0]-v[1])<v[2]){q=true;break;}
            }
        }
    }while(next_permutation(v,v+4));
    if(q==false)printf("N\n");
    else printf("S\n");

    return 0;
}