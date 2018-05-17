#include<bits/stdc++.h>

using namespace std;


int main()
{
   char s[1000],s2[1000],s3[1000];
   char comp;
   while(scanf(" %[^+]+%[^=]=%s",s,s2,s3)!=EOF)
   {
   	long long int ans=0;
   	int x=0,y=0,z=0;
   	sscanf(s,"%d",&x);
        sscanf(s2,"%d",&y);
        sscanf(s3,"%d",&z);
   	if(s[0]=='R') ans=z-y;
        else if(s2[0]=='L') ans=z-x;
        else if(s3[0]=='J') ans=x+y;
        printf("%lld\n",ans);
   }
	return 0;
}
