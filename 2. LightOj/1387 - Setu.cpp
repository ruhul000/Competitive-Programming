//http://lightoj.com/volume_showproblem.php?problem=1387
//Accepted

#include <stdio.h>
#include <string.h>
int main ()
{
    int t,s,d=0,te,no=0,re[105];
    char a [100];
    scanf("%d",&te);
    while(te--)
    {
    scanf ("%d",&t);
    int i=0,s=0;
    while (t--)
     {
        scanf ("%s",a);
        if (strcmp (a,"donate")==0)
        {
            scanf ("%d",&d);
            s+=d;
        }
        else
        {
          re[i]=s;
          i++;
        }
    }
    printf ("Case %d:\n",++no);
    for(int j=0;j<i;j++)
    printf ("%d\n",re[j]);
    }
    return 0;
}
