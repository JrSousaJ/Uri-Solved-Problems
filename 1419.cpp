#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    while(~scanf("%d",&n),n)
    {
        int m[n],t[n];
        for (int i = 0; i < n; i++)scanf("%d",&m[i]);
        for (int i = 0; i < n; i++)scanf("%d",&t[i]);

        int cm=0,ct=0,pm=-1,pt=-1;
        int totm=0,tott=0;
        int f=0;
        for(int i=0;i<n;i++)
        {
            if(m[i]!=pm)
            {
                pm=m[i];
                cm=1;
            }
            else cm++;
            if(t[i]!=pt)
            {
                pt=t[i];
                ct=1;
            }
            else ct++;
            if(cm==3 && ct==3)
            {
                f=1;
                cm = ct = 0;
            }
            else if(cm == 3 && !f && ct<3)
            {
                totm+=30;
                f=1;
            }
            else if(ct == 3 && !f && cm<3)
            {
                tott+=30;
                f=1;
            }
            totm+=m[i];
            tott+=t[i];
        }
        if(totm==tott)printf("T\n");
        else printf("%c\n",(totm>tott)?'M':'L');
    }
    return 0;
}
