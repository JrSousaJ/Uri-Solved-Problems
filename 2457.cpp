#include<bits/stdc++.h>

using namespace std;

int main()
{
  	char c;cin >> c;
    char s[1006];
    getchar();
    scanf(" %[^\n]",s);
    char *p=strtok(s," ");
    vector<string>v;
    while(p!=0)
    {
        char q[10006];
        sscanf(p," %s",q);
        p=strtok(NULL," ");
        v.push_back(q);
    }  
    double t=0;
    for(int i=0;i<v.size();i++)
    {
        for(int j=0;j<v[i].size();j++)
        {
            if(v[i][j]==c)
            {
                t++;
                break;
            }
        }
    }
    double a=v.size();
    double ans=(double)(t/a);
    printf("%.1lf\n",ans*100);
   	return 0;
}
