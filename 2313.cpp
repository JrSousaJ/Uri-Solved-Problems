#include<bits/stdc++.h>

using namespace std;


int main()
{
	 long long int n,n2,n3;
	 scanf("%lld%lld%lld",&n,&n2,&n3);
		int q=max(n, max(n2,n3));
		int q2=min(n,min(n2,n3));
		int ans=n+n2+n3 - q-q2;
		if(q>=q2+ans)
			printf("Invalido\n");
		else
		{
			if(n!=n2 && n2!=n3 && n!=n3)
				printf("Valido-Escaleno\n");
			else if(n==n2 && n2==n3)
				printf("Valido-Equilatero\n");
			else
				printf("Valido-Isoceles\n");
			if(pow(q,2) == (pow(q2,2)+pow(ans,2)))
				printf("Retangulo: S\n");
			else
				printf("Retangulo: N\n");
		}
	return 0;
}



