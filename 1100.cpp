#include<bits/stdc++.h>

using namespace std;
const int oo=0x3f3f3f3f;
int dx[]={-2,-2,-1,-1,1,1,2,2},dy[]={1,-1,2,-2,2,-2,1,-1};
int cc=0;
int py,px,ix,iy;
int main()
{
    int n,n2;char s[6];
    while(~scanf(" %[^\n]",s))
    {
    	int dist[100][100];memset(dist,oo,sizeof dist);
    	px=s[3]-'a';
    	py=s[4]-48;
    	ix=s[0]-'a';
    	iy=s[1]-48;
    	queue<pair<int,int> > fila;
    	fila.push(make_pair(ix,iy));
    	dist[ix][iy]=0;
    	while(!fila.empty())
    	{
    		
    		int u=fila.front().first;
    		int ul=fila.front().second;
    		fila.pop();
    		for(int i=0;i<8;i++)
			{
				int xx=u+dx[i],yy=ul+dy[i];
				if(xx>=0 && yy>=1 && xx<=7 && yy<=8 && dist[xx][yy]==oo)
				{
						dist[xx][yy]=dist[u][ul]+1;
						fila.push(make_pair(xx,yy));
				}
			}
			
    	}
    	int ans=dist[px][py];
    	printf("To get from %c%c to %c%c takes %d knight moves.\n",s[0],s[1],s[3],s[4],ans);
    	
    }
    

   	return 0;
}
