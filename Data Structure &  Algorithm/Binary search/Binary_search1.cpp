#include <iostream>
using namespace std;

/*int binary_search(int A, int key, int imin, int imax)
{

	return 0;
}
*/
int main()
{
	int A[100],n,i,key,imin=0,imax,Result;

    cout<<"Enter the size of an array: ";
	cin>>n;
    cout<<"Enter the elements of the array: ";
	imax=n-1;

	for(i=0; i<n; i++)
	{
	    cin>>A[i];
	}

	cout<<"Enter the number to be search: ";
	cin>>key;


	    while(imax >= imin)
        {
            int imid = (imin + imax)/2;
            if(A[imid]==key)
            {
                Result = 1;
                break;
            }
            else if(A[imid] < key)
            {
                imin = imid + 1;
            }
            else if(A[imid] > key)
            {
                imax = imid - 1;
            }
            else Result = 0;
        }

	if(Result==0)
	{
	    cout<<"The number not found."<<endl;
	}
	else{
        cout<<"The number is found = "<<Result;
	}

return 0;
}
