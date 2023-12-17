#include<stdio.h>

int main(){

    int a[100],i,j,n,m,c=0,l,u,mid,temp;

    printf("Enter the size of an array: ");
    scanf("%d",&n);

    printf("Enter the elements of array: ");
    for(i=0;i<n;i++){
         scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<(n-i-1);j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("Sorted array: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

    printf("\nEnter the number to be search: ");
    scanf("%d",&m);

    l=0,u=n-1;
    while(l<=u){
         mid=(l+u)/2;
         if(m==a[mid]){
             c=1;
             break;
         }
         else if(m<a[mid]){
             u=mid-1;
         }
         else
             l=mid+1;
    }
    if(c==0)
         printf("The number is not found.");
    else
         printf("The number is found.");

    return 0;
}
