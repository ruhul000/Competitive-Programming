//http://uva.onlinejudge.org/external/125/12577.html
//Accepted

#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

int main()
{
    char s[20];
    int css=0;

    while(1)
    {
        css++;
        gets(s);
        if(strcmp(s,"*")==0) break;
        else if(strcmp(s,"Hajj")==0)
        cout<<"Case "<<css<<": "<<"Hajj-e-Akbar"<<endl;
        else if(strcmp(s,"Umrah")==0)
        cout<<"Case "<<css<<": "<<"Hajj-e-Asghar"<<endl;
    }


    return 0;
}
