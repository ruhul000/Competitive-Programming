//****************DFS***************//
//**********TOPOLOGICAL SORT********//


#include<iostream>
#include<algorithm>
using namespace std;
int G[100][100],color[100],prev[100],d[100],f[100],inf=1000000,time=0,T_Sort[100];

void Dfs_visit(int v,int e,int u)
{
    int i;
    time++;
    d[u]=time;
    color[u]=1;
    for(i=1; i<=v; i++)
    {
        if(G[u][i]==1 && color[i]==0)
        {
            prev[i]=u;
            color[i]=1;
            //cout<<i<<" ";
            Dfs_visit(v,e,i);
        }
    }
    time++;
    f[u]=time;
}

void Dfs(int v,int e)
{
    int i;
    for(i=1; i<=v; i++)
    {
        color[i]=0;
        prev[i]=NULL;
        d[i]=inf;
        f[i]=inf;
    }
    int count=0;
    for(i=1; i<=v; i++)
    {
        if(color[i]==0)
        {
            //cout<<i<<" ";
            Dfs_visit(v,e,i);
            count++;
        }
    }
    cout<<"Sub Graph: "<<count<<endl;
}


int main()
{
   int i,j,v,e,m,n,temp=0;;
   cin>>v>>e;

   for(i=1;i<=e;i++)
   {
        cin>>m>>n;
        G[m][n]=1;
        G[n][m]=1;
   }

   for(i=1;i<=v;i++)
   {
       for(j=1;j<=v;j++)
       {
            cout<<G[i][j]<<" ";
       }
       cout<<endl;
   }

    Dfs(v,e);
    cout<<"\nPrevious: "<<endl;
    for(i=1; i<=v; i++)
    {
        cout<<prev[i]<<" ";
    }
    cout<<endl<<endl;
    cout<<"Cost: "<<endl;
    for(i=1; i<=v; i++)
    {
        cout<<d[i]<<" ";
    }
    cout<<endl<<endl;
    cout<<"Finish time: "<<endl;
    for(i=1; i<=v; i++)
    {
        cout<<f[i]<<" ";
    }
    cout<<endl<<endl;


//***********TOPOLOGICAL SORT***********//
    cout<<"Topological sort\n";

    int z=1;
    int index=1;
    while(z!=v+1)
    {
        int max=0;
        for(i=1; i<=v; i++)
        {
            if(f[i]>max)
            {
                max=f[i];
                T_Sort[z]=i;
                index=i;
                //cout<<max<<endl;
            }
        }
        f[index]=-1;
        z++;
        //cout<<index<<endl;
    }

    for(i=v; i>=1; i--)
    {
        cout<<T_Sort[i]<<" ";
    }
    cout<<endl;

return 0;
}
