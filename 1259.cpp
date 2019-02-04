#include<bits/stdc++.h>

using namespace std;

int main()
{
  int n;cin >> n;
  vector<int>par;
  vector<int>impar;
   while(n--)
   {
      int x;cin >> x;
      if(x%2==0)par.push_back(x);
      else impar.push_back(x);
   }
   sort(par.begin(),par.end());
   sort(impar.begin(),impar.end());
   reverse(impar.begin(),impar.end());
   for(int i=0;i<par.size();i++)printf("%d\n",par[i]);
   for(int i=0;i<impar.size();i++)printf("%d\n",impar[i]);
   
	return 0;
}
