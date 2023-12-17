#include<iostream>
using namespace std;

int main()
{
    int i,j,A[100][100],v,e,m,n;

    cin>>v>>e;

    for(i=0; i<v; i++)
    {
        for(j=0; j<v; j++)
        {
            A[i][j]=0;
        }
    }

    for(i=0; i<e; i++)
    {
        cin>>m>>n;
        A[m][n]=1;
        A[n][m]=1;
    }

    for(i=0; i<v; i++)
    {
        for(j=0; j<v; j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }

return 0;
}
