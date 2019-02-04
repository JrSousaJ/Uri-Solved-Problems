#include<bits/stdc++.h>

using namespace std;
vector<string>s;
int main()
{
    int x;
	int b=0;
    while(cin >> x)
    {
    	if(x==0)
    		break;
    	getchar();
    	char q[10000];
    	int maior=0;
    	if(b==1)printf("\n");
    	for(int i=0;i<x;i++)
    	{
    		scanf(" %[^\n]",q);
    		s.push_back(q);
    		if(strlen(q)>maior)maior=strlen(q);
    		
    	}
    	for(int i=0;i<s.size();i++)
    	{
    		for(int j=s[i].size();j<maior;j++)printf(" ");
    		cout << s[i] << endl ;
    	}
    	b=1;
    	s.clear();
    }
	return 0;
}
