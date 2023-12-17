#include <stdio.h>


unsigned long humble[6000];
unsigned long _min(unsigned long a, unsigned long b, unsigned long c, unsigned long d)
{
    unsigned long m;
    if(a < b)
        m = a;
    else
        m = b;
    if(m > c)
        m = c;
    if(m > d)
        m = d;
    return m;
}

int main()
{
    int e1=1, e2=1, e3=1, e4=1, i=1;
    unsigned long a1, a2, a3, a4;
    humble[1] = 1;
    for(i=2; i<6000; ++i)
    {
        a1 = 2*humble[e1];
        a2 = 3*humble[e2];
        a3 = 5*humble[e3];
        a4 = 7*humble[e4];
        humble[i] =  _min(a1, a2, a3, a4);
        if(humble[i] == a1)
            e1++;
        if(humble[i] == a2)
            e2++;
        if(humble[i] == a3)
            e3++;
        if(humble[i] == a4)
            e4++;
    }

    int n;
    while(scanf("%d", &n) && n)
    {
        if(n%100==11 || n%100==12 || n%100==13)
            printf("The %dth humble number is %lu.\n", n, humble[n]);
        else if(n % 10 == 1)
            printf("The %dst humble number is %lu.\n", n, humble[n]);
        else if(n % 10 == 2)
            printf("The %dnd humble number is %lu.\n", n, humble[n]);
        else if(n % 10 == 3)
            printf("The %drd humble number is %lu.\n", n, humble[n]);
        else
            printf("The %dth humble number is %lu.\n", n, humble[n]);
    }
    return 0;
}
