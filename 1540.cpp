#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;cin >> n;
    while(n--)
    {
        double n2,n3,n4,n5;cin >> n2 >> n3 >> n4 >> n5;
        double ans=0,q=n4-n2;
        ans=(double)((n5-n3)/(n4-n2));
        char s[50];
        sprintf(s,"%lf",ans);
        for(int i=0;i<strlen(s);i++)
        {
            if(s[i]!='.')printf("%c",s[i]);
            else if(s[i]=='.')
                {
                    printf(",");
                    for(int j=i+1;j<=i+2;j++)printf("%c",s[j]);

                    printf("\n");
                    break;
                }
        }
    }
	return 0;
}
