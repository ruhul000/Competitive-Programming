#include <stdio.h>

//LCM =least common multiple

int GCD(int num1, int num2)
{
    int temp,gcd;
    if(num1 == 0)
        gcd = num1;
    else if(num2 == 0)
        gcd = num2;
    else
        {
            while(num2 != 0)
            {
                temp = num2;
                num2 = num1 % num2;
                num1 = temp;
            }
                gcd = num1;
        }
        printf("Gcd is %d\n", gcd);

    return gcd;
}
int main()
{
    int num1,num2,LCM;

    printf("num1= ");
    scanf("%d",&num1);
    printf("num2= ");
    scanf("%d",&num2);

        LCM = (num1 * num2) / GCD(num1,num2);
        printf("LCM IS %d", LCM);

        return 0;
}
