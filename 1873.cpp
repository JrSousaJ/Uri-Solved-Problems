#include<bits/stdc++.h>

using namespace std;


int main()
{
	 string s,s1;
	 int n;
	 scanf("%d",&n);
	 while(n--)
	 {
	 	cin >> s >> s1;
	 	if(s==s1)
	 		printf("empate\n");
	 	else if(s=="tesoura" && s1=="papel" || s=="papel" && s1=="pedra" || s=="pedra" && s1=="lagarto" || s=="lagarto" && s1=="spock")
	 		printf("rajesh\n");
	 	else if(s=="spock" && s1=="tesoura" || s=="tesoura" && s1=="lagarto" || s=="lagarto" && s1=="papel" || s=="papel" && s1=="spock")
	 		printf("rajesh\n");
	 	else if(s=="spock" && s1=="pedra" || s=="pedra" && s1=="tesoura")
	 		printf("rajesh\n");
	 	else if(s1=="tesoura" && s=="papel" || s1=="papel" && s=="pedra" || s1=="pedra" && s=="lagarto" || s1=="lagarto" && s=="spock")
	 		printf("sheldon\n");
	 	else if(s1=="spock" && s=="tesoura" || s1=="tesoura" && s=="lagarto" || s1=="lagarto" && s=="papel" || s1=="papel" && s=="spock")
	 		printf("sheldon\n");
	 	else if(s1=="spock" && s=="pedra" || s1=="pedra" && s=="tesoura")
	 		printf("sheldon\n");
		
	}
	return 0;
}



