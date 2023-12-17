//http://uva.onlinejudge.org/external/115/11530.html

#include<stdio.h>
#include<conio.h>

//Accepted

int main()
{
    int T,i,count;
    char sms;
    scanf("%d",&T);
    sms=getchar();
    for(i=1; i<=T; i++)
    {
        count=0;

        while((sms = getchar()) !=10)
        {
            if(sms==' ' || sms=='a' || sms=='d' || sms=='g' || sms=='j' || sms=='m' || sms=='p' || sms=='t' || sms=='w')
            {
                count=count+1;
            }
            else if(sms=='b' || sms=='e' || sms=='h' || sms=='k' || sms=='n' || sms=='q' || sms=='u' || sms=='x')
            {
                count=count+2;
            }
            else if(sms=='c' || sms=='f' || sms=='i' || sms=='l' || sms=='o' || sms=='r' || sms=='v' || sms=='y')
            {
                count=count+3;
            }
            else if(sms=='s' || sms=='z')
            {
                count=count+4;
            }
            //cout<<"Case #"<<i<<": "<<count<<endl;

        }
        printf("Case #%d: %d\n",i,count);
    }

    return 0;
}
