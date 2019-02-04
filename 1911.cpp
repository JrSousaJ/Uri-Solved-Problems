#include<bits/stdc++.h>

using namespace std;


int main()
{
    map <string,string> n;
    int n2,n3;
    
   scanf("%d",&n2);
   string s1,s;
    while(n2!=0)
    {
		
			
	      int q[n2];
	    for(int i=0;i<n2;i++)
	    {
	        cin >> s >> s1;
	        n[s]=s1;
	    }
	   	scanf("%d",&n3);
	   	int c=0;
	   	while(n3--)
	   	{
	   		cin >> s >> s1;
	       string m=n[s];
	        if(m.size()<s1.size())
	        {
	       		c++;
	       		
	        }
	       	else
	       	{
	       		int cc=0;
	       		for(int i=0;i<m.size();i++)
	       		{
	       			
	       			if(m[i]!=s1[i])
	       			{
	       				
	       				cc++;
	       			}
	       				
	       			if(cc>1)
	       			{
	       				
	       				c++;
	       				break;
	       			}
	       				
	       		}
	       	}
	       
	        	
	        
	   	}
   		 printf("%d\n",c);
   		 scanf("%d",&n2);
   		 n.clear();
    }
    



    return 0;
}
