#include <cstdio>
#include <string>
#include <algorithm>
#include <iostream>
using namespace std;

struct Bigint {
    // representations and structures
    string a; // to store the digits
    int sign; // sign = -1 for negative numbers, sign = 1 otherwise
// constructors

    Bigint() {} // default constructor

    Bigint( string b ) { (*this) = b; } // constructor for string
// some helpful methods
    int size()
    { // returns number of digits
        return a.size();
    }
    Bigint inverseSign()
    { // changes the sign
        sign *= -1;
        return (*this);
    }
    Bigint normalize( int newSign )
    { // removes leading 0, fixes sign
        for( int i = a.size() - 1; i > 0 && a[i] == '0'; i-- )
            a.erase(a.begin() + i);
        sign = ( a.size() == 1 && a[0] == '0' ) ? 1 : newSign;
        return (*this);
    }
    // assignment operator
    void operator = ( string b )
    { // assigns a string to Bigint
        a = b[0] == '-' ? b.substr(1) : b;
        reverse( a.begin(), a.end() );
        this->normalize( b[0] == '-' ? -1 : 1 );
    }
// conditional operators
    bool operator < ( const Bigint &b ) const
    { // less than operator
        if( sign != b.sign ) return sign < b.sign;
        if( a.size() != b.a.size() )
            return sign == 1 ? a.size() < b.a.size() : a.size() > b.a.size();
        for( int i = a.size() - 1; i >= 0; i-- ) if( a[i] != b.a[i] )
            return sign == 1 ? a[i] < b.a[i] : a[i] > b.a[i];
        return false;
    }
    bool operator == ( const Bigint &b ) const
    { // operator for equality
        return a == b.a && sign == b.sign;
    }
// output method
    void print() {
        if( sign == -1 ) putchar('-');
        for( int i = a.size() - 1; i >= 0; i-- ) putchar(a[i]);
    }
};



int main() {

    Bigint a, b, c; // declared some Bigint variables

    /////////////////////////

    // taking Bigint input //

    /////////////////////////

    string input; // string to take input

    cin >> input; // take the Big integer as string

    a = input; // assign the string to Bigint a



    cin >> input; // take the Big integer as string

    b = input; // assign the string to Bigint b

    /////////////////////////////////

    // Using conditional operators //

    /////////////////////////////////

    if( a == b ) puts("equal"); // checking equality

    else puts("not equal");

    if( a < b ) puts("a is smaller than b"); // checking less than operator

    return 0;
}
