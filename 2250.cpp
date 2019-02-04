#include<bits/stdc++.h>

using namespace std;
int n;
struct tetris
{
	int pontos;
	string nome;
	bool operator < (const tetris&u)const
	{
		if(pontos==u.pontos)
			return nome < u.nome;
		return pontos>u.pontos;
	}
};

int main()
{

	int c=1;	
	while(scanf("%d",&n),n)
	{
		tetris v[n];
		for(int k=0;k<n;k++)
		{
			string s;cin >> s;
		
			
			int v2[12];
			for(int i=0;i<12;i++)
			{
				scanf("%d",&v2[i]);
			}
			sort(v2,v2+12);
			v2[0]=0;
			v2[11]=0;
			int som=0;
			for(int i=0;i<12;i++)
			{
				som+=v2[i];
			}
			v[k].nome=s;
			v[k].pontos=som;
		}
		sort(v,v+n);
		printf("Teste %d\n",c++);
		int pant=0,pos=0;
		for(int i=0;i<n;i++)
		{

			if(i==0)
			{
				printf("%d %d %s\n",i+1,v[i].pontos,(v[i].nome).c_str());
				pant=v[i].pontos;
				pos=i;
			}
			else 
			{
				int to=i;
				if(v[i].pontos==pant)to=pos;
				else pos=to;

				printf("%d %d %s\n",to+1,v[i].pontos,(v[i].nome).c_str());
				pant=v[i].pontos;
			}
		}
		printf("\n");
		

	}
	
    return 0;
}