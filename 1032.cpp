#include<bits/stdc++.h>

using namespace std;
int pri[4000];
int flavin(int n) {
    int r = 0;
    for (int i = 1; i <=n; i++)
        r = (r +pri[n-i]) % i;

    return r;
}
int c=0;
void queroprimo()
{
	
	for(int j=2;j<32650;j++)
	{
		int flag=1;
		if(j==2)pri[c++]=j;
		else if(j%2==0)continue;
		else
		{
			for(int i=3;i*i<=j;i+=2)
			{
				if(j%i==0)flag=0;
			}
			if(flag)pri[c++]=j;
		}
		
	}
}
int main()
{
    int n;
    memset(pri,0,sizeof pri);
    queroprimo();
   	while(cin >> n && n!=0)
   	{
   		int q=flavin(n);
   		printf("%d\n",++q);
   	}

    return 0;
}
