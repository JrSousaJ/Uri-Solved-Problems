#include<bits/stdc++.h>

using namespace std;


int main()
{
   char s[10000000];
   while(~scanf(" %[^\n]",s))
   {
      if(s[0]=='*')break;
      int pri=0;
      int flag=0;
      char acho,me,ma;
      for(int i=0;i<strlen(s);i++)
      {
         if(s[i]!=' ' && pri==0)
         {
            pri=1;
            acho=s[i];
            ma=toupper(acho);
            me=tolower(acho);
         }
         else if(s[i-1]==' ' && s[i]!=' ' && s[i]!=ma && s[i]!=me)flag=1;
      }
      if(flag==1)printf("N\n");
      else printf("Y\n");
   }
   
	return 0;
}
