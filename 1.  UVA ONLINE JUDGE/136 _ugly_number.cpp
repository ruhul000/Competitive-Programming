#include <stdio.h>

int main()
{
    unsigned long int ugly[2500];

    int i,x,y,z,cur_index=0,last_index=0,temp;
    ugly[0]=1;
    for(i=1;i<2500;i++)
    {
        ugly[i]=0;
    }

    for(;;)
    {
        x=ugly[cur_index]*2;
        y=ugly[cur_index]*3;
        z=ugly[cur_index]*5;
        int has_ugly=0;

        if(x>ugly[last_index])
        {

            ugly[last_index+1]=x;
            last_index++;

        }
        else
        {
            has_ugly=0;
            for(i=last_index;i>cur_index;i--)
            {
                if(ugly[i]==x)
                {
                    has_ugly=1;
                }
            }
            if(has_ugly==0)
            {
                for(i=last_index;i>cur_index;i--)
                {
                    if(x<ugly[i])
                    {
                        ugly[i+1]=ugly[i];
                    }
                    else
                    {
                        ugly[i+1]=x;
                        last_index++;
                        break;
                    }
                }

            }

        }

        //starting for y

         if(y>ugly[last_index])
        {

            ugly[last_index+1]=y;
            last_index++;

        }
        else
        {
            has_ugly=0;
            for(i=last_index;i>cur_index;i--)
            {
                if(ugly[i]==y)
                {
                    has_ugly=1;
                }
            }
            if(has_ugly==0)
            {
                for(i=last_index;i>cur_index;i--)
                {
                    if(y<ugly[i])
                    {
                        ugly[i+1]=ugly[i];
                    }
                    else
                    {
                        ugly[i+1]=y;
                        last_index++;
                        break;
                    }
                }

            }

        }

        //starting for z
        ugly[last_index+1]=z;
        last_index++;

        cur_index++;

        if(cur_index==500)
        {
            printf("The 1500'th ugly number is %li.",ugly[500]);
            break;
        }



    }

     return 0;

}
