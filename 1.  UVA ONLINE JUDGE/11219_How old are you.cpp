//http://uva.onlinejudge.org/external/112/11219.html
//Accepted
#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
   int d1,m1,y1,d2,m2,y2,css=0,t,age;
   cin>>t;
   while(t--)
   {
       css++;

       scanf("%d/%d/%d",&d1,&m1,&y1);
       scanf("%d/%d/%d",&d2,&m2,&y2);

       age=y1-y2;
       if(m1<m2)
       {
          age--;
       }
       else if(m1==m2)
       {
            if(d1<d2)
            {
                age--;
            }
       }

       if(age<0)
       {
           cout<<"Case #"<<css<<": "<<"Invalid birth date"<<endl;
       }
       else if(age>130)
       {
           cout<<"Case #"<<css<<": "<<"Check birth date"<<endl;
       }
       else
       {
            cout<<"Case #"<<css<<": "<<age<<endl;
       }

   }

    return 0;
}


