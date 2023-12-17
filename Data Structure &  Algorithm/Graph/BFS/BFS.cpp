//---------------BFS using QUEUE------------------//
#include<iostream>
#include<queue>
using namespace std;

int G[100][100];
int i,j,v,u,e,m,n,D[100],Flag[100],P[100];
queue <int>q;
int S;

void BFS(int v, int e)
{
    for(i=0; i<v; i++)
    {
        Flag[i]=0;
        D[i]=10000;
        P[100]=0;
    }
    cin>>S;

    Flag[S]=1;
    D[S]=0;
    q.push(S);

    while(!q.empty())
    {
        u=q.front();
        cout<<"u: "<<u<<" ";
        q.pop();

        for(i=0; i<v; i++)
        {
            if(G[u][i]==1 && Flag[i]==0)
            {
                    Flag[i]=1;
                    D[i]=D[u]+1;
                    P[i]=u;

                    q.push(i);
            }
        }
    }
}

int main()
{
    cin>>v>>e;

    for(i=0; i<e; i++)
    {
        cin>>m>>n;

        G[m][n]=1;
        G[n][m]=1;
    }
    cout<<"Graph: \n";
    for(i=0; i<v; i++)
    {
        for(j=0; j<v; j++)
        {
            cout<<G[i][j]<<" ";
        }
        cout<<endl;
    }

    BFS(v,e);

    cout<<"\n\nFlag: ";
    for(i=0; i<v; i++)
    {
        cout<<Flag[i]<<" ";
    }
    cout<<endl;

    cout<<"Dist: ";
    for(i=0; i<v; i++)
    {
        cout<<D[i]<<" ";
    }
    cout<<endl;

    cout<<"Prnt: ";
    for(i=0; i<v; i++)
    {
        cout<<P[i]<<" ";
    }
    cout<<endl;

return 0;
}
