#include<iostream>
#include<stdio.h>
#include<queue>
using namespace std;


int main()
{
    int g[100][100],u,v,i,j,N,M;
    int indeg[100];
    queue <int> q,res;

   while(1)
   {
       cin>>N>>M;
       if(N==M==0) break;

        for(i=1 ; i<=N; i++)
        {
            indeg[i]=0;
            for(j=1; j<=N; j++)
            {
                g[i][j]=0;
            }
        }
        for(i=1 ; i<=M; i++)
        {
            cin>>u>>v;
            indeg[v]++;
            g[u][v]=1;
            //g[v][u]=1;
        }

        for(i=1; i<=N; i++)
        {
            if(indeg[i]==0)
            q.push(i);
        }

        while(!q.empty())
        {
            u=q.front();
            q.pop();
            res.push(u);

            for(i=1; i<=N; i++)
            {
                if(g[u][i]==1)
                {
                    if(indeg[i]==0)
                    {
                        q.push(i);
                    }
                    else
                    {
                        indeg[i]--;
                        if(indeg[i]==0)
                        {
                            q.push(i);
                        }
                    }
                }
            }
        }
   }

    return 0;
}
