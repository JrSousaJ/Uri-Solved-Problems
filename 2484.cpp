#include<bits/stdc++.h>

using namespace std;

int main()
{
    
    string s;
    while(cin >> s)
    {
        int q=s.size();
        while(q>0)
        {
            int a=s.size()-q;
             for(int j=0;j<a;j++)
                    printf(" ");
            for(int i=0;i<q;i++)
            {

               
                if(i==0)printf("%c",s[i]);
                else printf(" %c",s[i]);
            }
            printf("\n");
            q--;
        }
        printf("\n");
        
    }

   	return 0;
}
