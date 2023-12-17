// right shift >> and left shift <<

#include<iostream>
#include <stdio.h>
using namespace std;

/*int i,n,k,j,b[100],count=0;
void binary(int n)
{
    k=n;
        for(i=0;i<=k;i++)
        {
            b[i]=n%2;
            if(b[i]==1) count++;
            n=n/2;
            if(n==0)break;
        }
        for(j=i;j>=0;j--)
        {
            printf("%d",b[j]);
        }
}


int main()
{
    int j = 5225, m, n;
    while(cin>>j)
    {
        printf("The decimal %d is equal to binary - ", j);
        // assume we have a function that prints a binary string when given
            a decimal integer
        //
        binary(j);
        cout<<endl;

        // the loop for right shift operation
        for ( m = 0; m <=10; m++ )
        {
            n = j >> m;
            printf("%d right shift %d gives %d = ", j, m,n);
            binary(n);
            cout<<endl;
        }
        cout<<endl;
        // the loop for left shift operation
        for ( m = 0; m <= 10; m++ )
        {
            n = j << m;
            printf("%d left shift %d gives %d = ", j, m,n);
            binary(n);
            cout<<endl;
        }
    }

    return 0;
}*/

//


  int main()
  {
      unsigned int x,y,a,b,c;

      while(cin>>x>>y)
      {
        a = x ^ y; // Ex - OR x and y
        cout<<a<<endl;
        b = x & y; // and
        cout<<b<<endl;

        cout<<~0x00<<endl;
      }


  }
