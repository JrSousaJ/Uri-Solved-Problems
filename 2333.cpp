#include<bits/stdc++.h>

using namespace std;
int pd[50];
int main()
{
    int n;cin >> n;
    int v[n];
    int q[n];
    int va=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&v[i]);
        q[i]=v[i]*-1;
        va+=v[i];
    }
    int best=0;
     int sum=0;
    for(int i=0;i<n;i++)
    {
       
        sum= max(v[i],sum+v[i]);
        best=max(best,sum);
    }
    int b2=0;
    int s2=0;
    for(int i=0;i<n;i++)
    {
        s2=max(q[i],s2+q[i]);
        b2=max(b2,s2);
    }
   
    va+=b2;
    cout << max(best,va) << endl;


    return 0;

}