#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int arr[10];
    int i,n;
    for(i=0; i<10; i++)
    {
        cin>>arr[i];
    }

	int  j, k, temp ;

	printf ( "Insertion sort.\n" ) ;
	printf ( "\nArray before sorting:\n") ;

	for ( i = 0 ; i <= 10 ; i++ )
		printf ( "%d\t", arr[i] ) ;

	for ( i = 1 ; i <= 10 ; i++ )
	{
		for ( j = 0 ; j < i ; j++ )
		{
			if ( arr[j] > arr[i] )
			{
				temp = arr[j] ;
				arr[j] = arr[i] ;

				for ( k = i ; k > j ; k-- )
					arr[k] = arr[k - 1] ;

				arr[k + 1] = temp ;
			}
		}
	}

	printf ( "\n\nArray after sorting:\n") ;

	for ( i = 0 ; i <= 10 ; i++ )
		printf ( "%d\t", arr[i] ) ;

    return 0;
}
