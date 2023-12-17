//acm.hdu.edu.cn/showproblem.php?pid=1002
//1002 A + B Problem II

//accepted

#include<stdio.h>
#include<string.h>
char a[1000],b[1000],c,sum[9880];
int t,i,la,lb,max,hate;
int main()
{
    scanf("%d", &t);
    for(int p=0; p<t; p++)
    {


        scanf("%s %s",&a,&b);

        printf("Case %d:\n",p+1);

        printf("%s + %s =",a,b);
        la = strlen(a);
        for(i=0;i<la/2;i++)
        {
            c = a[i];
            a[i] = a[la-1-i];
            a[la-1-i] = c;
        }

        lb = strlen(b);
        for(i=0;i<lb/2;i++)
        {
            c = b[i];
            b[i] = b[lb-1-i];
            b[lb-1-i] = c;
        }



        max = la;

        if(lb>max)
            max = lb;

        hate = 0;
        for(i=0;i<max;i++)
        {
            if(i<la)
                hate += a[i] - '0';
            if(i<lb)
                hate +=b[i] - '0';
            sum[i] = hate%10 + '0';
            hate = hate /10;
        }



        if(hate>0)
        {
            sum[max]=hate+'0';
            max++;
        }

        sum[max]=0;


        for(i=0;i<max/2;i++)
        {
            c = sum[i];
            sum[i] = sum[max-1-i];
            sum[max-1-i] = c;
        }



        printf(" %s\n",sum);
        if(p != t-1)
            printf("\n");

    }

    return 0;
}
