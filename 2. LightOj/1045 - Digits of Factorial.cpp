//http://lightoj.com/volume_showproblem.php?problem=1045

#include <math.h>
#include <stdio.h>

#define MAX 1000000

double f[MAX + 1];

void precalculate(void)
{
    int i;
    f[1] = 0.0;
    for (i = 2; i <= MAX; i++)
    {
        f[i] = log(i) + f[i-1];
    }
}

int digits(int n, int base)
{
    if (n == 0) return 1;
    else
    return (int)(ceil(f[n]/log(base)));
}

int main()
{
    precalculate();

    int T,i,n, base;;
    scanf("%d", &T);

    for (i = 1; i <= T; i++)
    {

        scanf("%d%d", &n, &base);

        printf("Case %d: %d\n", i, digits(n, base));
    }
    return 0;
}

/*#include <math.h>
#include <stdio.h>

#define MAX 1000000

double f[MAX + 1];

int digits(int n, int base)
{
    if (n == 0) return 1;
    return static_cast<int> (ceil(log[n]/log(base)));
}

int main()
{
    int T,count,ncase,n,base;
    double x;
    scanf("%d", &T);

    for (ncase = 1; ncase <= T; ncase++)
    {
        n, base;
        scanf("%d%d", &n, &base);
        count=0;
        if (n == 0)
        {
            count=1;
            printf("Case %d: %d\n", ncase, count);
        }
        else
        {
            x=log(n)/log(base);
            count=ceil(x);
            printf("Case %d: %d\n", ncase, count);
        }
    }
    return 0;
}*/
