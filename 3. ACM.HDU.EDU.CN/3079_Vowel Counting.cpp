//http://acm.hdu.edu.cn/showproblem.php?pid=3079
//Accepted

#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char a;
    int T;
    cin>>T;
    T--;

getchar();
do{
    while((a=getchar()) != '\n')
    {
        if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u')
        {
            cout<<(char (a-32));
        }
        else if(a>=65 && a<=90)
        {
            if(a=='A' || a=='E' || a=='I' || a=='O' || a=='U')
            {
                cout<<a;
            }
            else
            cout<<(char (a+32));
        }
        else
        cout<<a;
    }
    cout<<"\n";
}while(T--);
    return 0;
}
