#include <iostream>
#include <queue>
using namespace std;

int main()
{
   queue<int> q;
   int n;

   while(1)
   {
    cin>>n;
    if(n==-1) break;
    else q.push(n);
    }
   /*q.push(100);
   q.push(200);
   q.push(300);
   q.push(400);*/

   cout << "Size of the queue: " << q.size() << endl;

   /*cout << q.front() << endl;
   q.pop();

   cout << q.front() << endl;
   q.pop();

   cout << q.front() << endl;
   q.pop();

   cout << q.front() << endl;
   q.pop();*/
   while(1)
   {
          if ( q.empty() ) {
       cout << "Queue is empty" << endl;
       break;
       }
       else{
        cout<<q.front()<<endl;
        q.pop();
       }
   }



   return 0;
}

