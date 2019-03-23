#include<bits/stdc++.h>

using namespace std;

int main()
{
    char s[102];
    while(~scanf(" %[^\n]",s))
    {
        int ans=0;
        for(int i=0;i<strlen(s);i++)
        {
            s[i] = tolower(s[i]);
            if(s[i]== 'a' || s[i]=='j' || s[i]=='s')ans+=1;
            else if(s[i]== 'b' || s[i]=='k' || s[i]=='t')ans+=2;
            else if(s[i]== 'c' || s[i]=='l' || s[i]=='u')ans+=3;
            else if(s[i]== 'd' || s[i]=='m' || s[i]=='v')ans+=4;
            else if(s[i]== 'e' || s[i]=='n' || s[i]=='w')ans+=5;
            else if(s[i]== 'f' || s[i]=='o' || s[i]=='x')ans+=6;
            else if(s[i]== 'g' || s[i]=='p' || s[i]=='y')ans+=7;
            else if(s[i]== 'h' || s[i]=='q' || s[i]=='z')ans+=8;
            else if(s[i]== 'i' || s[i]=='r')ans+=9;

            if(ans >= 10)
            {
                int aux=0;
                while(ans>0)
                {
                    aux+=ans%10;
                    ans/=10;
                }
                ans=aux;
            }
        }
        printf("%d\n",ans);
    }
    return 0;
}
