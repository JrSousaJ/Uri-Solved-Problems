#include<bits/stdc++.h>

using namespace std;
int toInt(string x)
{
   stringstream xx;
   xx << x;
   int k=0;
   xx >> k;
   return k;
}
int main()
{
   int n;scanf("%d",&n);
   while(n--)
   {
      char s[16];
      string help;
      int ans=0;
      scanf(" %s",s);
      if(s[2]>='0' && s[2]<='9')
         help+=s[2];
      if(s[3]>='0' && s[3]<='9')
         help+=s[3];
      ans+=toInt(help);
      help.clear();
      if(s[5]>='0' && s[5]<='9')
         help+=s[5];
      if(s[6]>='0' && s[6]<='9')
         help+=s[6];
      if(s[7]>='0' && s[7]<='9')
         help+=s[7];
      ans+=toInt(help);
      help.clear();
      if(s[11]>='0' && s[11]<='9')
         help+=s[11];
      if(s[12]>='0' && s[12]<='9')
         help+=s[12];
       ans+=toInt(help);
      printf("%d\n",ans);
   }

   
    return 0;
}