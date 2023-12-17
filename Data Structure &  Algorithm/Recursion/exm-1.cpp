#include<stdio.h>
#include<iostream>
using namespace std;

//Problem: 1

/*void function_for(int i, int n)
{
    if(i<=n)
    {
        printf("%d ", i);
        function_for(i+1, n);
    }
}

void function_rof(int i, int n)
{
    if(i<=n)
    {
        function_rof(i+1, n);
        printf("%d ", i);
    }
}

int main()
{
    int i,n;

    while(1)
    {
        cin>>i>>n;
        function_for(i,n);
        cout<<endl;
        function_rof(i,n);
        cout<<endl;
    }
    return 0;
}*/

//Problem 2

/*void arr_rev(int i,int n, int *ara)
{
    if(i<n)
    {
        arr_rev(i+1,n,ara);
        cout<<ara[i]<<" ";
    }
}
int main()
{
    int n,i;
    int ara[20];
    while(1)
    {
        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>ara[i];
        }
        arr_rev(0,n,ara);
        cout<<endl;
    }
}
*/
/*void print(int i,int n,int *ara)
{
    if(i<n)
    {
        cout<<ara[i]<<" "<<ara[n-1]<<endl;
        print(i+1,n-1,ara);
    }
}

*/

// problem 3

/*void print_even(int i, int n, int *ara)
{
    if(i<n)
    {
        if(ara[i]%2==1) ara[i]=0;
        print_even(i+1, n , ara);
    }
}

int main()
{
    int n,i;
    int ara[20];
    while(1)
    {
        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>ara[i];
        }
        print_even(0,n,ara);

        for(i=0; i<n; i++)
        {
            if(ara[i]==0) continue;
            cout<<ara[i]<<" ";
        }
        cout<<endl;

    }
}*/
/*void function(int i, int j, int *n, int *a)
{
    if(i==*n)
    {
        *n = j; // resize n
        return;
    }
    if(a[i]%2==0)
    {
       a[j++] = a[i];
    }
    function(i+1, j, n, a);
}

int main()
{
    int i, n, a[100];
    scanf("%d", &n);
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);
    function(0, 0, &n, a);
    for(i=0; i<n; i++)
        printf("%d ", a[i]);
    printf("\n");
    return 0;
}*/

// problem 4

/*#include <stdio.h>

void print_poly(int i, int n)
{
    if(i<n)
    {
        if(i==0) printf("1");
        else
        {
            printf(" + x");
            if(i>1) printf("^%d", i);
        }
        print_poly(i+1, n);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    print_poly(0, n);
    printf("\n");
    return 0;
}
*/

// problem 5

/*int gcd(int a, int b)
{
    if(b==0) return a;
    return gcd(b, a%b);
}

int main()
{
    int a, b, g;
    scanf("%d %d", &a, &b);
    g = gcd(a, b);
    printf("%d\n", g);
    return 0;
}*/

// problem 5

/*int lcm(int a, int b, int m)
{
    if(a*m % b == 0) return a*m;
    return lcm(a, b, m+1);
}

int main()
{
    int a, b, l;
    scanf("%d %d", &a, &b);
    l = lcm(a, b, 1);
    printf("%d\n", l);
    return 0;
}
*/

// Problem 6

int find_max(int i, int n, int *ara)
{
    if(i==n)
    {
        return ara[i];
    }
    if(ara[i]<ara[i+1])
    {
        ara[i]=ara[i+1];
        find_max(i+1, n, ara);
    }
}

int main()
{
    int n,i;
    int ara[20];
    while(1)
    {
        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>ara[i];
        }
        int v;
        v=find_max(0,n,ara);
        cout<<v<<endl;
    }
}
