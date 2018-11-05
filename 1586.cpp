#include<bits/stdc++.h>

using namespace std;
int xx;

int bb(vector<long long int> &x, int l,int r)
{
	int mid=(l+r)/2;
	if(l>r)return -1;
	long long int a=0;
	long long int b=0;
	int bs=mid+1;
	int aa=1;
	for(int i=0;i<x.size();i++)
	{
		if(i<=mid)
		{
			a+=x[i]*bs;
			bs--;
		}
		else 
		{
			b+=x[i]*aa;
			aa++;
		}
	}
	if(a==b)return mid;
	else if(a>b)bb(x,l,mid-1);
	else bb(x,mid+1,r);
}

int main()
{
	while(scanf("%d",&xx),xx)
	{
		vector<string>af;
		vector<long long int>ff;
		for(int i=0;i<xx;i++)
		{
			string s;cin >> s;
			long long int som=0;
			for(int i=0;i<s.size();i++)som+=(long long int)s[i];
			//cout << som << endl;
			ff.push_back(som);
			af.push_back(s);
		}	
		int ans=bb(ff,0,xx-1);
		if(ans==-1)printf("Impossibilidade de empate.\n");
		else printf("%s\n",(af[ans]).c_str());
		af.clear();
		ff.clear();
	}
	return 0;
}

