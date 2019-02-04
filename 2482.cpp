#include<bits/stdc++.h>

using namespace std;


int main()
{
    map <string,string> n;
    int n2,n3;
    
    char s[8000];
    char s1[8000];
    scanf("%d",&n2);
      int q[n2];
    for(int i=0;i<n2;i++)
    {
        scanf(" %[^\n]",s);
        scanf(" %[^\n]",s1);
       
        n[s]=s1;
    }
   	scanf("%d",&n3);
   	while(n3--)
   	{
   		scanf(" %[^\n]",s);
        scanf(" %[^\n]",s1);
        printf("%s\n",s);
        cout << n[s1] ;
        printf("\n\n");
        
   	}
   	



    return 0;
}
