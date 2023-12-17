//http://uva.onlinejudge.org/external/116/11636.html
//Accepted
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
  int n,i;
  double y;
  for(i=1; i<=2000; i++)
  {
      cin>>n;
      if(n<0)
      {
          break;
      }
      else
      {
        y=log2(n);
        cout<<"Case "<<i<<":"<<" "<<ceil(y)<<endl;
      }
  }

    return 0;
}
