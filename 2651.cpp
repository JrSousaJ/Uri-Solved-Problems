#include<bits/stdc++.h>

using namespace std;


int main()
{
  string s;

  cin >> s;

  
        for(int i=0;i<s.size();i++)
        {
          if(s[i]>=65 && s[i]<=90) s[i]+=32;
        }
        size_t found= s.find("zelda");
   if(found!=-1)
    printf("Link Bolado\n");
    else 
      printf("Link Tranquilo\n");

   
	return 0;
}
