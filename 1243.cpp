#include <bits/stdc++.h>
using namespace std;

int main() {
	char s[1000];
	while(scanf(" %[^\n]",s) != EOF)
    {
        char *p = strtok(s, " ");
        vector<string>v;
        while(p != NULL)
        {
            char aux[105];
            sscanf(p, " %s", aux);
            v.push_back(aux);
            p = strtok(NULL, " ");
        }
        int l=0,pa=0;
        for(int i=0;i<v.size();i++)
        {
            int c=0, f=1;
            for(int j=0;j<v[i].size();j++)
            {
                if(v[i][j]=='.')
                {
                    c++;
                }
                if(c>=2  || (v[i][j]>= '0' && v[i][j]<='9') || (v[i][j]=='.' && v[i][j+1]!='\0'))
                {
                        f=0;
                        break;
                }
            }
            if(f==1)
            {
                for(int j=0;j<v[i].size();j++)
                {
                    if(v[i][j]!='.')l++;
                }
                pa++;
            }
        }
        
        if(pa!=0)
        {
            int ans = l/pa;
            if(ans<=3)printf("250\n");
            else if(ans==4 || ans==5)printf("500\n");
            else printf("1000\n");
        }
        else
        {
            printf("250\n");
        }
	}


	return 0;
}