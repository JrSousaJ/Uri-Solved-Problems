#include<bits/stdc++.h>

using namespace std;


int main()
{
    int n,n2;
    string s;

    while(scanf("%d %d",&n,&n2)!=EOF)
    {
        bool aeae=true;
        for(int j=0;j<n2;j++)
        {
                cin >> s;
            int n3;
            if(aeae==true)
            {
                int c=0;
                for(int i=0;i<n;i++)
                {
                    scanf("%d",&n3);
                    if(n3==1)
                        c++;
                }
                if(c==n)
                {
                    cout << s << endl ;
                    aeae=false;
                }

            }
            else
            {
                for(int i=0;i<n;i++)
                {
                    scanf("%d",&n3);
                }
            }
            
        }
        if(aeae==true)
                cout <<  "Pizza antes de FdI" << endl; 

    }

   
    
   
    


    return 0;
}
