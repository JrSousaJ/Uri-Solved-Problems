#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;cin >> n;
    int v[27];
    getchar();
    while(n--)
    {
    	memset(v,0,sizeof v);
		string s;getline(cin,s);
		int n2=0;
		for(int i=0;i<s.size();i++)
		{
			 if(s[i]>=65 && s[i]<=90)s[i]=tolower(s[i]);
             if(s[i]>=97 && s[i]<=122)
            	{
            		if(v[s[i]-97]==0)
            			{
            				v[s[i]-97]=1;
            				n2++;
            			}
            	}
		}
		if(n2==26)printf("frase completa\n");
		else if(n2>=13)printf("frase quase completa\n");
		else printf("frase mal elaborada\n");
    }
	return 0;
}
