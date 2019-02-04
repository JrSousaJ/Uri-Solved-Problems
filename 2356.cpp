#include<bits/stdc++.h>

using namespace std;

int main()
{
  	string s,s1;
    while(cin >> s >> s1)
    {
        bool tem=false;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==s1[0])
            {
                int q=i;
                for(int j=0;j<s1.size();j++,q++)
                {
                   
                    if(s[q]==s1[j])
                        tem=true;
                    else
                    {
                        tem=false;
                        break;
                    }
                }

            }
             if(tem)break;
        }
        if(tem)printf("Resistente\n");
        else printf("Nao resistente\n");

    }
   	return 0;
}
