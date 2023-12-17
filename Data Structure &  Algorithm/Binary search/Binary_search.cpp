#include <iostream>
using namespace std;
int imid = 0;
int i;

int main()
{
	int A[100],n;
	int key, imin=0, imax;

    cin>>n>>key;

    imax=n-1;

	for(i=0; i<n; i++)
	{
		cin>>A[i];
	}
	for(i=0; i<n; i++)
	{
	    cout<<A[i]<<" ";
	}

	while(imax >= imin)
	{
		imid = (imin + imax)/2;

		if(A[imid] < key)
		{
			imin = imid + 1;
		}
		else if(A[imid] > key)
		{
			imax = imid - 1;
		}

	}
	cout<<imid;
	cout<<"key not found"<<endl;

return 0;
}
