#include<bits/stdc++.h>

using namespace std;


int achar(string z)
{
   stack<char>c;
   int n2=0;
   for(int i=0;i<z.size();i++)
      {
        if(z[i]=='<')c.push(z[i]);
        else if(z[i]=='>' && !c.empty())
        {
           c.pop();
           n2++;
        } 
      }
     return n2;
}
int main()
{
  int n;cin >> n;
  getchar();
   while(n--)
   {
      string s;getline(cin,s);

      int x=achar(s);
      printf("%d\n",x);
     
   }
   
	return 0;
}
