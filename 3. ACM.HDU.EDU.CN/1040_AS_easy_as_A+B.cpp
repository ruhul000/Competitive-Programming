#include <stdio.h>

int main()
{
    int arr_size;
    int i,j,a,test;
    int temp;
    int arr[1000];
    while(scanf("%d",&test))
    {
        for(a=1; a<=test; a++)
        {
            scanf("%d", &arr_size);
            for(i=0;i < arr_size; i++)
            {
                scanf("%d",&arr[i]);
            }

            for(i=0; i< arr_size;i++)
            {
                for(j=i+1; j<arr_size; j++)
                {
                    if(arr[i]>arr[j])
                    {
                        temp = arr[i];
                        arr[i]= arr[j];
                        arr[j] = temp;
                    }
                }
            }

            for(i=0; i<arr_size;i++)
            {
                printf("%d",arr[i]);
                if(i==arr_size-1)
                {
                    printf("\n");
                }
                else
                {
                    printf(" ");
                }
            }
        }
        break;
    }

    return 0;
}
