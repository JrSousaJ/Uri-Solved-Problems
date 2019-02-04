#include<bits/stdc++.h>

using namespace std;

int main()
{
	char tecl[48]="`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
	char s;
	while(~scanf("%c",&s))
	{
				for(int i=0;i<48;i++)
					{
						if(s==tecl[i])
						{
							printf("%c",tecl[i-1]);
							break;
						}
						else if(s==' ')
						{
								printf(" ");
								break;
						}
						else if(s=='\n')
						{
								printf("\n");
								break;
						}
						
					}
			
	}

	return 0;
}