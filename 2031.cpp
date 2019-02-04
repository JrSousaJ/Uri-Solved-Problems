#include<bits/stdc++.h>

using namespace std;

int main()
{
  	int n;cin >> n;
    while(n--)
    {
        string s,s1;cin >> s >> s1;
        if(s=="ataque" && s1=="pedra" || s=="pedra" && s1=="papel" || s=="ataque" && s1=="papel")printf("Jogador 1 venceu\n");
        else if(s1=="ataque" && s=="pedra" || s1=="pedra" && s=="papel" || s1=="ataque" && s=="papel")printf("Jogador 2 venceu\n");
        else if(s=="papel" && s1=="papel")printf("Ambos venceram\n");
        else if(s=="pedra" && s1=="pedra")printf("Sem ganhador\n");
        else printf("Aniquilacao mutua\n");
    }
   	return 0;
}
