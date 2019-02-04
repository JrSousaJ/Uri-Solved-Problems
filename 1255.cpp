#include<bits/stdc++.h>

using namespace std;

int main()
{
    int v[4000];
    int n;cin >> n;
    getchar();
    while(n--)
    {
        memset(v,0,sizeof v);
        char s[8000];
        scanf(" %[^\n]",s);
         getchar();
        int mai=0;
        for(int i=0;i<strlen(s);i++)
        {

            if(s[i]>=65 && s[i]<=90)s[i]=tolower(s[i]);
            if(s[i]>=97 && s[i]<=122)
            {
              int q=s[i];
              v[q]++;
              if(v[q]>mai)mai=v[q];
            }
        }
        for(char i='a';i<='z';i++)
        {
          
          if(v[i]==mai)printf("%c",i);
        }
        printf("\n");

    }
	return 0;
}
