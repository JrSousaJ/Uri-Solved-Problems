#include<bits/stdc++.h>

using namespace std;

int main()
{
    
    char s[1000000];
    while(~scanf(" %[^\n]",s))
    {
         char *p=strtok(s," ");
         vector<string>v;
         while(p!=0)
         {
             char q[10006];
             sscanf(p," %s",q);
             p=strtok(NULL," ");
             v.push_back(q);
         }
         int cont=0;
         char c=tolower(v[0][0]);
         int flag=0;
         for(int i=1;i<v.size();i++)
         {
            char q=tolower(v[i][0]);
            if(c==q && flag==0)
                {
                    cont++;
                    flag=1;
                }            
                else if(c!=q)
                    {
                        c=q;
                        flag=0;
                    }
         }
         printf("%d\n",cont);
    }
   	return 0;
}
