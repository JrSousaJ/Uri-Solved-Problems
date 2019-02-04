#include<bits/stdc++.h>

using namespace std;

int main(){

	

	
	int d,h,m,s;
	scanf("Dia %d", &d);
	scanf("%d : %d : %d\n", &h, &m, &s);
	int d1,h1,m1,s1;
	scanf("Dia %d", &d1);
	scanf("%d : %d : %d", &h1, &m1, &s1);

	s += m*60 + h*60*60 + d*24*60*60;
	s1 += m1*60 + h1*60*60 + d1*24*60*60;
	int st = s1 - s;
	int  dt, ht, mt;
	dt = st/(24*60*60);
	st -= dt*24*60*60;
	ht = st/(60*60);
	st -= ht*60*60;
	mt = st/60;
	st -= mt * 60;
	printf("%d dia(s)\n", dt);
	printf("%d hora(s)\n", ht);
	printf("%d minuto(s)\n", mt);
	printf("%d segundo(s)\n", st);




}