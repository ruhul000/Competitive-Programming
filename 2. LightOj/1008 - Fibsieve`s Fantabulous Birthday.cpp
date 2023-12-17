//http://lightoj.com/volume_showproblem.php?problem=1008
//Accepted
#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    long long int  n,t,css=0;

    cin>>t;
    while (t--)
     {
        css++;
        cin>>n;
        long long int tmp = sqrt(n);
        //cout<< tmp<<endl;
        long long int left = n - tmp * tmp;
        //cout<< left<<endl;

        if (tmp % 2 == 0)
         {
            if (tmp * tmp == n)
             {
                cout<<"Case "<<css<<": "  << tmp << " 1" << endl;
            }
            else
            {
                if (left < tmp + 1)
                {
                    cout<<"Case "<<css<<": "  << tmp + 1 << " " << left << endl;
                }
                else
                {
                    cout<<"Case "<<css<<": "  << tmp+1 - (left - tmp - 1) << " " << tmp + 1 << endl;
                }
            }
        }
        else
        {
            if (tmp * tmp == n)
             {
                cout<<"Case "<<css<<": "  << "1 " << tmp << endl;
            }
            else
            {
                if (left < tmp + 1)
                {
                    cout<<"Case "<<css<<": "<< left << " " << tmp + 1 << endl;
                }
                else
                {
                    cout<<"Case "<<css<<": " << tmp + 1 << " " << tmp + 1 - (left - tmp - 1) << endl;
                }
            }
        }
    }

    return 0;
}
