#include<bits/stdc++.h>
using namespace std;

int main()
{
   char v[10];
   while(~scanf(" %s",v))
   {
   		int x = 0, y = 0;
   		for(int i=0;i<9;i++)
   		{
   			x += (v[i]-'0') * (i+1);
   		}
   		(x%11==10)? x=0 : x %= 11;
   		for(int i=0,k=9;i<9;i++,k--)
   		{
   			y += (v[i]-'0') * k;
   		}
   		(y%11==10)? y=0 : y %= 11;
   		printf("%c%c%c.%c%c%c.%c%c%c-%d%d\n",v[0],v[1],v[2],v[3],v[4],v[5],v[6],v[7],v[8],x,y);

   }
   return 0;
}