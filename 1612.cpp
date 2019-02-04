#include<bits/stdc++.h>

using namespace std;
int vis[501][501];
int dx[]={1,-1,0,0},dy[]={0,0,1,-1};
int main()
{
    int n,n2,z,a;
    while(scanf("%d%d",&n,&n2),n,n2)
    {
        int f=0,xu,yu;
        memset(vis,0,sizeof vis);
        for(int i=0;i<n;i++)
        {
          for(int j=0;j<n2;j++)
          {
            char c;scanf(" %c",&c);
            if(c=='#')vis[i][j]=-1;
            if(!f && vis[i][j]==0)
            {
                f=1;
                z=i;
                a=j;
            }
          }
        }
        queue<pair<int,int> >fila;
        fila.push(make_pair(z,a));
        while(!fila.empty())
        {
          int u=fila.front().first;
          int ul=fila.front().second;
          fila.pop();
          for(int i=0;i<4;i++)
          {
            int xx=dx[i]+u,yy=dy[i]+ul;
            if(xx>=0 && yy>=0 && xx<n && yy<n2  && vis[xx][yy]==0)
            {
                vis[xx][yy]=vis[u][ul]+1;
                fila.push(make_pair(xx,yy));
                xu=xx,yu=yy;
            }
          }
        }
        fila.push(make_pair(xu,yu));
        for(int i=0;i<n;i++){
          for(int j=0;j<n2;j++)
          {
            if(vis[i][j]!=-1)vis[i][j]=0;
          }
        }
        int maior=-1;
        while(!fila.empty())
        {
          int u=fila.front().first;
          int ul=fila.front().second;
          fila.pop();
          for(int i=0;i<4;i++)
          {
              int xx=dx[i]+u,yy=dy[i]+ul;
              if(xx>=0 && yy>=0 && xx<n && yy<n2 && vis[xx][yy]==0)
              {
                vis[xx][yy]=vis[u][ul]+1;
                fila.push(make_pair(xx,yy));
                maior=max(maior,vis[xx][yy]);
                 xu=xx,yu=yy;
              }
          }
        }
       printf("%d\n",maior);
        
    }
   	return 0;
}
