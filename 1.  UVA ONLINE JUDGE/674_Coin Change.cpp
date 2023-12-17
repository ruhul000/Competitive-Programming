//http://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=114&page=show_problem&problem=615
//Accepted
#include<stdio.h>
#include<stdlib.h>
#include<algorithm>
#include<math.h>
#include<string.h>
#include<iostream>
using namespace std;

int count( int S[], int m, int n )
{
    int table[n+1];

    memset(table, 0, sizeof(table));

    table[0] = 1;

    for(int i=0; i<m; i++)
        for(int j=S[i]; j<=n; j++)
            table[j] += table[j-S[i]];

    return table[n];
}

int main()
{
    int arr[] = {50, 25, 10, 5, 1};
    int m = sizeof(arr)/sizeof(arr[0]);
    int n;
    while(cin>>n)
    printf("%d\n", count(arr, m, n));
    return 0;
}

