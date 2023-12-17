#include<stdio.h>
#include<iostream>
#include<string.h>
#include<math.h>
#include<algorithm>

using namespace std;
int row[10],col[10],d1[10],d2[10],x[10];

int check(int c)
{
    int r;
    for( r=1; r<=8; r++)
    {
        if(row[r]==0 && col[c]==0 && d1[r+c]==0 && d2[abs(r-c)]==0)
        {
            x[c]=r;
            //cout<<r<<endl;
            row[r]=1;
            //col[c]=1;
            d1[r+c]=1;
            d2[abs(r-c)]=1;

            if(c==9)
            {
                cout<<"\nsolution found\n";
                for(int i=1; i<=8; i++)
                {
                    cout<<x[i]<<" ";
                }
                row[r]=0;
                d1[r+c]=0;
                d2[abs(r-c)]=0;
            }
            else
            {
                check(c+1);
            }

        }

    }


}

int main()
{
    int n,r,c;

    //cin>>n;
    //cout<<endl;
    //while(n--)
    {
      //  cin>>r>>c;

        check(1);
    }

return 0;
}
