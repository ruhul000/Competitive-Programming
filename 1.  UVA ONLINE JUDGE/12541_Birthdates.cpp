//http://uva.onlinejudge.org/external/125/12541.html
//Accepted
#include<iostream>
#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;

struct Bday
{
    char name[20];
    int d,m,y;
}n[100];

int main()
{
    long long i,j,s,max,min=0,loc,loc1;
    int data[100];

    cin>>s;

    for(i=0; i<s; i++)
    {
        cin>>n[i].name>>n[i].d>>n[i].m>>n[i].y;
    }

    for(i=0; i<s; i++)
    {
         data[i]=n[i].d+(n[i].m*30)+(n[i].y*365);
    }

    loc=0;
    max=0;
    for(i=0; i<s; i++)
    {
        if(data[i]>max)
        {
            max=data[i];
            loc=i;
        }
    }

    min=max;
    loc1=0;
    for(i=0; i<s; i++)
    {
        if(data[i]<min)
        {
            min=data[i];
            loc1=i;
        }
    }

    cout<<n[loc].name<<endl;
    cout<<n[loc1].name<<endl;

    return 0;
}

/*int main()
{
    int i,j,s;
    char temp[20];

    cin>>s;

    for(i=0; i<s; i++)
    {
        cin>>n[i].name>>n[i].d>>n[i].m>>n[i].y;
    }


    for(i=0; i<s; i++)
    {
        for(j=0; j<s-1; j++)
        {
            if(n[j].y==n[j+1].y)
            {
                if(n[j].m==n[j+1].m)
                {
                    if(n[j].d<n[j+1].d)
                    {

                        n[j].name[j];// = n[j].name;
                        //n[j].name = temp;
                    }
                }
                else
                {

                }
            }
            else
            {

            }
        }
    }


    return 0;
}*/

