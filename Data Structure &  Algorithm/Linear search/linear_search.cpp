
#include<stdio.h>
int main(){

    int a[100],i,n,m,c=0;

    printf("Enter the size of an array: ");
    scanf("%d",&n);

    printf("Enter the elements of the array: ");
    for(i=0;i<=n-1;i++){
         scanf("%d",&a[i]);
    }

    printf("Enter the number to be search: ");
    scanf("%d",&m);
    for(i=0;i<=n-1;i++){
         if(a[i]==m){
             c=1;
             break;
         }
    }
    if(c==0)
         printf("The number is not in the list");
    else
         printf("The number is found");

    return 0;
}
