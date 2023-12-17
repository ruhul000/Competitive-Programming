/*
 * File: 11498 - Division of Nlogonia.cpp
 * Tag: 
 * http://uva.onlinejudge.org/external/114/11498.html


 * Author: Shoshi
 * Runtime: 
 * Created on October 27, 2011, 4:25 PM
 */

#pragma warning (disable : 4786)
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstdlib>
#include <cstring>
#include <string>
#include <cctype>
#include <stack>
#include <queue>
#include <list>
#include <vector>
#include <map>
#include <sstream>
#include <cmath>
#include <bitset>
#include <utility>
#include <set>
#include <numeric>

#define INF_MAX 2147483647
#define INF_MIN -2147483647
#define pi acos(-1.0)
#define N 1000000
#define LL long long

using namespace std;

int main() {
 	//freopen ("11498 - Division of Nlogonia_in.txt", "r", stdin);
	int t,x,y,n,m,i;
	while(cin>>t && t) {
		cin>>x>>y;
		for(i=0;i<t;i++) {
			cin>>n>>m;
			if(n==x || m==y || n==x*(-1) || m==y*(-1))
				cout<<"divisa\n";
			else if(n>x && m>y)
				cout<<"NE\n";
			else if(n>x && m<y)
				cout<<"SE\n";
			else if(n<x && m>y)
				cout<<"NO\n";
			else if(n<x && m<y)
				cout<<"SO\n";
		}
	}
	return 0;
}