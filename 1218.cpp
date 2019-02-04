#include<bits/stdc++.h>
using namespace std;
int main()
{
    string n;
    int m=0;
   	bool prim=false;
    while(cin >>n)
    {
    	if(prim==true)
    	{
    		printf("\n");
    	}

    	 char s[1000000];
    	scanf(" %[^\n]",s);
    	int f=0,ma=0,ans=0;
    	char *p=strtok(s," ");
    	vector<string>af;
    	while(p!=0)
    	{
    		char q[100000];
    		sscanf(p," %s",q);
    		p=strtok(NULL," ");
    		af.push_back(q);
    	}
    	for(int i=0;i<af.size();i++)
    	{
    		if(af[i]==n)
    		{
    			ans++;
    			if(af[i+1]=="F")f++;
    			else ma++;
    		}
    	}
    	printf("Caso %d:\n",++m);
    	printf("Pares Iguais: %d\n",ans);
    	printf("F: %d\n",f);
    	printf("M: %d\n",ma);
    	prim=true;
    }
  
    return 0;
}