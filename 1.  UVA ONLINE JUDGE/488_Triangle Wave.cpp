//http://uva.onlinejudge.org/external/4/488.html
//Accepted

#include <stdio.h>
#include <iostream>
using namespace std;


int main()
{
    int leanth,i,j,t,n;

    cin>>t;

    for(int k=1 ; k<=t; k++)
    {
        scanf("%d %d",&leanth,&n);
        if(k>1)cout<<endl;
        for(int l=1; l<=n; l++)
        {
            if(l>1)cout<<endl;
            for(i=1;i<=leanth;i++)
            {
                for(j=1;j<=i;j++)
                {
                    printf("%d",i);
                }
                printf("\n");
            }

            for(i=leanth-1;i>=1;i--)
            {
                for(j=i;j>=1;j--)
                {
                    printf("%d",i);
                }
                if(i>0)printf("\n");
            }
        }
    }
    return 0;
}


/*#include <cstdio>

int A, F;

void print_wave()
{
    for (int i = 0; i < F; ++i) {
        if (i > 0) puts("");

        for (int j = 1; j <= A; ++j) {
            for (int k = 1; k <= j; ++k)
                printf("%d", j);
            puts("");
        }
        for (int j = A - 1; j >= 1; --j) {
            for (int k = 1; k <= j; ++k)
                printf("%d", j);
            puts("");
        }
    }
}

int main()
{
    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; ++i) {
        scanf("%d%d", &A, &F);

        if (i > 0) puts("");
        print_wave();
    }

    return 0;
}*/
