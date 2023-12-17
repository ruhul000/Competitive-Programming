#include <stdio.h>

int main()
{
    int T,i;
    while(scanf("%d",&T),T)
    {
        int curr_f=0, next_f=0,Time=0;

        for(i=1;i<=T;++i)
        {
            scanf("%d",&next_f);

            if(curr_f < next_f)
                {
                    Time = Time + (next_f - curr_f)*6+5;
                }
            else
                {
                    Time = Time + (curr_f - next_f)*4+5;
                }
                curr_f = next_f;
        }

        printf("%d\n",Time);
    }

    return 0;
}
