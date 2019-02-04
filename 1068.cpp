#include<bits/stdc++.h>

using namespace std;


bool achar(string z)
{
   stack<char>c;
   for(int i=0;i<z.size();i++)
      {
        if(z[i]=='(')c.push(z[i]);
        else if(z[i]==')')
        {
            if(c.empty())return false;
            else c.pop();
        } 
      }
     return c.empty();
}
int main()
{
   string s;
   while(getline(cin,s))
   {
      
     bool aff=achar(s);
     if(aff==true)printf("correct\n");
     else printf("incorrect\n");
     
   }
   
   return 0;
}
