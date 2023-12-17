/*
 * File: 11044 - Searching for Nessy.cpp
 * Tag: 
 * http://uva.onlinejudge.org/external/110/11044.html


 * Author: Shoshi
 * Runtime: 
 * Created on October 27, 2011, 3:55 PM
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
 	//freopen ("11044 - Searching for Nessy_in.txt", "r", stdin);
	int t,n,m;
	cin>>t;
	while(t--) {
		cin>>n>>m;
		n-=2;
		m-=2;
		if(n%3!=0)
			n+=(3-n%3);
		if(m%3!=0)
			m+=(3-m%3);
		cout<<(n/3)*(m/3)<<endl;

	}
	return 0;
}