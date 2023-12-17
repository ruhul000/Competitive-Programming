//http://uva.onlinejudge.org/external/103/10340.html
//Accepted

#include <cstdio>
#include <cstring>
#include <iostream>
#define MAXLEN 1048575
using namespace std;

char s1[MAXLEN + 1];
char s2[MAXLEN + 1];
int l1, l2;

bool is_subseq()
{
    int i, j;
    for (i = 0, j = 0; i < l1 && j < l2; ++j)
    {
        if (s2[j] == s1[i])
        {
            //cout<<s1[i]<<" "<<s2[j]<<" "<<i<<" "<<j<<endl;
            ++i;

        }
        //cout<<<<j<<endl;
    }


    return i == l1;
}

int main()
{
    while (true) {
        if (scanf("%s%s", s1, s2) != 2) break;
        l1 = strlen(s1);
        l2 = strlen(s2);

        if (is_subseq())
            puts("Yes");
        else
            puts("No");
    }

    return 0;
}



/*#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

char s[1048575], t[1048575];



int main()
{
    int i,j,k,z;
    int l2,l1,flag;
      while (true)
      {
        if (scanf("%s%s", s, t) != 2) break;
        l1=strlen(s);
        l2=strlen(t);
        k=0;
        for(i=0; i<l1; i++)
        {
            for(j=k; j<l2; j++)
            {
                if(s[i]==t[j])
                {
                    flag=1;
                    k=j;
                    break;
                }
                else
                {
                    flag=0;
                }
            }
            if(flag==0) break;
        }

        if(flag==1)
        {
            cout<<"Yes\n";
        }
        else
        {
            cout<<"No\n";

        }


    }

    return 0;
}*/

/*int check(char a)
{
    for(int i=j; i<l2; i++)
    {
        if(t[i]==a)
        {
            j=i;
            cout<<j<<endl;
            flag=1;
            break;
        }
        else
        {
            flag=0;
        }
    }
    return flag;
}
*/

  //cout<<l1<<" "<<l2<<endl;
        /*z=0;
        if(l1>l2)
        {
            z=0;
        }
        else
        {
            cout<<"eeee"<<endl;
            for(i=0; i<l1; i++)
            {
                z = check(s[i]);
                if(z==0)break;
            }
            j=0;
        }
        if(z==1)
            {
                cout<<"Yes\n";
            }
            else
            {
                cout<<"No\n";
            }*/
