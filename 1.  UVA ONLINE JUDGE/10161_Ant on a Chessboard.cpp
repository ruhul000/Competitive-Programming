//http://uva.onlinejudge.org/external/101/10161.html
//Accepted

#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    int n;

    while (cin >> n)
     {
        if (n == 0)
        break;

        int tmp = sqrt(n);
        //cout<< tmp<<endl;
        int left = n - tmp * tmp;
        //cout<< left<<endl;

        if (tmp % 2 == 0)
         {
            if (tmp * tmp == n)
             {
                cout << tmp << " 1" << endl;
            }
            else
            {
                if (left < tmp + 1)
                {
                    cout << tmp + 1 << " " << left << endl;
                }
                else
                {
                    cout << tmp+1 - (left - tmp - 1) << " " << tmp + 1 << endl;
                }
            }
        }
        else
        {
            if (tmp * tmp == n)
             {
                cout << "1 " << tmp << endl;
            }
            else
            {
                if (left < tmp + 1)
                {
                    cout << left << " " << tmp + 1 << endl;
                }
                else
                {
                    cout << tmp + 1 << " " << tmp + 1 - (left - tmp - 1) << endl;
                }
            }
        }
    }

    return 0;
}
