//http://uva.onlinejudge.org/external/125/12543.html
//Accepted
#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

int main()
{
    char s[10050],max_w[100],temp[100];
    int l,l1,l2,i,j,loc;

    for(i=0; i<100; i++)
    {
        temp[i]=0;
        max_w[i]=0;
    }
    for(i=0; i<10050; i++)
    {
        s[i]=getchar();
        if(s[i]=='D' && i>=4)
        {
            //cout<<s[i-4]<<s[i-3]<<s[i-2]<<s[i-1]<<s[i]<<endl;
            if(s[i-1]=='-' && s[i-2]=='N' && s[i-3]=='-' && s[i-4]=='E')
            break;
        }
    }
    l=strlen(s);
    //l1=strlen(temp);
    //l2=strlen(max_w);
    //cout<<l<<" "<<l1<<" "<<l2<<endl;


    j=0;
    for(i=0; i<l-5; i++)
    {
        //cout<<s[i];
        if(s[i]>='a' && s[i]<='z' || s[i]>='A' && s[i]<='Z' || s[i]=='-')
        {
            //cout<<s[i];
            temp[j]=s[i];
            j++;
        }
        else
        {
            l1=strlen(temp);
            l2=strlen(max_w);
            //cout<<l2<<endl;
            if(l1>l2)
            {
                for(int k=0; k<l1; k++)
                {
                    max_w[k]=temp[k];
                }
            }
            for(j=0; j<l1; j++)
            {
                temp[j]=0;
            }
            j=0;
        }
    }
    l2=strlen(max_w);
    for(i=0; i<l2; i++)
    {
        if(max_w[i]>='A' && max_w[i]<='Z')
        {
            max_w[i] = 'a' + (max_w[i]-'A');
            cout<<max_w[i];
        }
        else
        cout<<max_w[i];
    }
    cout<<endl;

    return 0;
}
