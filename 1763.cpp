#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{ 
	map<string,string>s;
      s["brasil"] =  "Feliz Natal!";
	  s["alemanha"] = "Frohliche Weihnachten!";
	  s["austria"] = "Frohe Weihnacht!";
	  s["coreia"] = "Chuk Sung Tan!";
	  s["espanha"] = "Feliz Navidad!";
	  s["grecia"] = "Kala Christougena!";
	  s["estados-unidos"] = "Merry Christmas!";
	  s["inglaterra"] = "Merry Christmas!";
	  s["australia"] = "Merry Christmas!";
	  s["portugal"] = "Feliz Natal!";
	  s["suecia"] = "God Jul!";
	  s["turquia"] = "Mutlu Noeller";
	  s["argentina"] = "Feliz Navidad!";
	  s["chile"] = "Feliz Navidad!";
	  s["mexico"] = "Feliz Navidad!";
	  s["antardida"] = "Merry Christmas!";
	  s["canada"] = "Merry Christmas!";
	  s["irlanda"] = "Nollaig Shona Dhuit!";
	  s["belgica"] = "Zalig Kerstfeest!";
	  s["italia"] = "Buon Natale!";
	  s["libia"] = "Buon Natale!";
	  s["siria"] = "Milad Mubarak!";
	  s["marrocos"] = "Milad Mubarak!";
	  s["japao"] = "Merii Kurisumasu!";
	  string s1;
	  while(cin >> s1)
	  {
	  	if(s.count(s1))
	  		cout << s[s1] << endl;
	  	else
	  		printf("--- NOT FOUND ---\n");
	  }
    return 0;
}