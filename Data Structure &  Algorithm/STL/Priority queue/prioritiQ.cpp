#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<algorithm>
#include<map>
#include<queue>
#include<stack.h>
#include<vector>
#include <utility>
using namespace std;

int main()
{
  priority_queue<int> Q;
  Q.push(1);
  Q.push(4);
  Q.push(2);
  Q.push(8);
  Q.push(5);
  Q.push(7);

  assert(Q.size() == 6);

  assert(Q.top() == 8);
  Q.pop();

  assert(Q.top() == 7);
  Q.pop();

  assert(Q.top() == 5);
  Q.pop();

  assert(Q.top() == 4);
  Q.pop();

  assert(Q.top() == 2);
  Q.pop();

  assert(Q.top() == 1);
  Q.pop();

  assert(Q.empty());

  return 0;
}
