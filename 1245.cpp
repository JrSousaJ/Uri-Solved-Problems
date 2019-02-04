#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	   
     int bt[31][2];
     int n;
     while(~scanf("%d",&n))
     {
     	memset(bt,0,sizeof bt);
     	for(int i=0;i<n;i++)
     	{
     		int x;char s;cin >> x >> s;
     		if(s=='E')bt[x-30][0]++;
     		else bt[x-30][1]++;
     	}
     	int ans=0;
     	for(int i=0;i<31;i++)
     	{
     		ans+= min(bt[i][0],bt[i][1]);
     	}
     	printf("%d\n",ans);
     }
      
    return 0;
}