//#############SINGLE SOURCE SHORTEST PATH################//
//################ DIJKSTRA ALGORITHM ####################//
//######################### ME ###########################//


#include<iostream>
#include<stdio.h>
using namespace std;

int G[100][100],inf=100000,d[100],p[100],used[100],pos;

void Initialize_Single_Source(int v,int e,int s)
{
    int i;

    for(i=1; i<=v; i++)
    {
        d[i]=inf;
        p[i]=NULL;
    }
    d[s]=0;
}

int Extract_Min(int v, int e)
{
	int i, j, min,pos;
	min=inf;
	for(i=1; i<=v; i++ )
	{
		for(j=1; j<=v; j++)
		{
			if(min>d[i] && used[i]==0)
			{
				min=G[i][j];
				pos=i;
			}
		}
	}
	//G[start][end]=INF;
	//cout<<start<<" "<<end<<endl;
	return pos;
}

void Relax(int u, int v, int w)
{
    if(d[v]>d[u]+w)
    {
        d[v]=d[u]+w;
        p[v]=u;
    }
}

int Dijkstra(int v,int e,int s)
{
    int i,j,k,u;

    Initialize_Single_Source(v,e,s);

    for(k=1; k<=v; k++)
    {
        u=Extract_Min(v,e);
        used[u]=1;
        for(j=1; j<=v; j++)
        {
            if(G[u][j]>0)
            {
                Relax(u,j,G[u][j]);
            }
        }
    }

    return 0;
}

int main()
{
    int i,j,v,e,w,m,n,s,z;

	cin>>v>>e;

	for(i=1; i<=e; i++)
	{
		cin>>m>>n>>w;

		G[m][n]=w;
		G[n][m]=w;
	}
	cin>>s;

    cout<<endl;
	for(i=1; i<=v; i++)
	{
		for(j=1; j<=v; j++)
		{
			cout<<G[i][j]<<"\t";
		}
		cout<<endl;
	}
    cout<<endl;

    Dijkstra(v,e,s);

        cout<<"Shortest Path length: ";
        for(i=1;i<=v;i++)
        {
            cout<<d[i]<<" ";
        }
        cout<<endl<<endl;

        cout<<"Prev: ";
        for(i=1;i<=v;i++)
        {
            cout<<p[i]<<" ";
        }
        cout<<endl<<endl;

        cout<<"VERTEX - VERTEX <- COST: \n\n";
        for(i=1; i<=v; i++)
        {
            printf(" V[%d]  -  V[%d]  <-  C[%d]\n\n",p[i],i,d[i]);
        }

return 0;
}
