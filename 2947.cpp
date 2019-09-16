#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;scanf("%d",&n);
	char s[n+1];
	scanf(" %s",s);
	int k;scanf("%d",&k);
	vector<string>v;
	for (int i = 0; i < k; i++)
	{
		char s1[n+1];
		scanf(" %s",s1);
		v.push_back(s1);
	}
	int vv[27];
	memset(vv,0,sizeof vv);
	int ans=0;
	for(int i=0;i<n;i++)
	{
		int ma=0;
		memset(vv,0,sizeof vv);

		for(int j=0;j<k;j++)
		{
			int a = s[i]-'A';
			int b = v[j][i] -'A';
			//printf("%d %d\n",a,b);
			if(a!=b){
				vv[b]++;
				//printf("%c %c %d\n",s[i], v[j][i],vv[b]);
				ma = max(vv[b],ma);
			}
		//	printf("deu ruim\n");
		}
		//printf("fon\n");
		ans+=ma;
	}
	printf("%d\n",ans);

	return 0;
}