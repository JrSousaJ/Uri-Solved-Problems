#include<bits/stdc++.h>

using namespace std;

int main()
{
    char s[104];
    int m=-1;
    string ma;
    while(~scanf(" %[^\n]",s))
    {
        if(s[0]=='0' && strlen(s)==1)break;
        vector<string>v;
        char *p = strtok(s, " ");
        while(p != NULL)
        {
            char q[105];
            sscanf(p, " %s",q);
            v.push_back(q);
            p = strtok(NULL, " ");
        }
        for(int i=0;i<v.size();i++)
        {
            int aux = v[i].size();
            if(aux>=m)
            {
                ma=v[i];
                m=aux;
            }
            printf("%d",v[i].size());
            if(i+1<v.size())printf("-");
        }
        printf("\n");
    }
    cout << "\nThe biggest word: "<< ma << endl;

}
