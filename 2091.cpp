#include<bits/stdc++.h>

using namespace std;


int main()
{
    long long int n;
   set <long long int> lista;
   set <long long int>::iterator it;
   int q;
   long long int n1;
   while(~scanf("%lld",&n))
   {
       for(int i=0;i<n;i++)
       {
            scanf("%lld",&n1);
            if(lista.find(n1)!=lista.end())
            {
                lista.erase(n1);
            }
            else{
                lista.insert(n1);
            }

       }



          for(it=lista.begin();it!=lista.end();it++)
        {
            if(it==lista.begin())cout << *it;
            else cout << " " << *it << endl;
        }
        lista.clear();

   }


    return 0;
}
