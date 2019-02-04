#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;cin >> n;
    int q;cin >> q;
    set<int>af;
    while(q--)
    {
    	int x;cin >> x;
    	af.insert(x);
    }
    cout << n-af.size() << endl;

    return 0;
}