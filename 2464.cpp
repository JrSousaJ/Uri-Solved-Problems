#include<bits/stdc++.h>

using namespace std;

int main()
{
  	char s;
    int q[27];
    for(int i=0;i<26;i++)
    {
        char c;scanf(" %c",&c);
        q[i]=c;
    }
    char sz[100002];
    scanf(" %[^\n]",sz);
    for(int i=0;i<strlen(sz);i++)
    {
        int b=sz[i]-'a';
        printf("%c",q[b]);
    }
    printf("\n");
   	return 0;
}
