#include<bits/stdc++.h>

using namespace std;
int valor(char c)
{
    if(c=='^')return 3;
    if(c=='/' || c=='*')return 2;
    if(c=='-' || c=='+')return 1;
    if(c=='(')return 0;
}
int main()
{
    int n;scanf("%d",&n);
    while(n--)
    {
        char s[400];
        scanf(" %[^\n]",s);
        stack<char>c;
        string output="";
        for(int i=0;i<strlen(s);i++)
        {
            if(s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/' || s[i]=='(' || s[i]==')' || s[i]=='^')
            {
                if(!c.size() || s[i]=='(')
                    c.push(s[i]);
                else if(s[i]==')')
                {
                    while(c.size() && c.top() != '(')
                    {
                        output+=c.top();
                        c.pop();
                    }
                    c.pop();
                }
                else
                {
                    while(c.size() && valor(s[i]) <= valor(c.top()))
                    {
                        output+=c.top();
                        c.pop();
                    }
                    c.push(s[i]);
                }
            }
            else output+=s[i];
        }    
        while(c.size())
        {
            output+=c.top();
            c.pop();
        }
        cout << output << endl;
    }
    
    

    return 0;
}