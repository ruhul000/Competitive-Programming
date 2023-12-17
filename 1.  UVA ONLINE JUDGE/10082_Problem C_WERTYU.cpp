//http://uva.onlinejudge.org/external/100/10082.html
//accepted

#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    char a;

    while((a=getchar()) != EOF)
    {
        if(a=='=') cout<<'-';
        else if(a=='-') cout<<'0';
        else if(a=='0') cout<<'9';
        else if(a=='9') cout<<'8';
        else if(a=='8') cout<<'7';
        else if(a=='7') cout<<'6';
        else if(a=='6') cout<<'5';
        else if(a=='5') cout<<'4';
        else if(a=='4') cout<<'3';
        else if(a=='3') cout<<'2';
        else if(a=='2') cout<<'1';
        else if(a=='1') cout<<'`';
        else if(a=='\\') cout<<']';
        else if(a==']') cout<<'[';
        else if(a=='[') cout<<'P';
        else if(a=='P') cout<<'O';
        else if(a=='O') cout<<'I';
        else if(a=='I') cout<<'U';
        else if(a=='U') cout<<'Y';
        else if(a=='Y') cout<<'T';
        else if(a=='T') cout<<'R';
        else if(a=='R') cout<<'E';
        else if(a=='E') cout<<'W';
        else if(a=='W') cout<<'Q';
        else if(a==39) cout<<';';
        else if(a==';') cout<<'L';
        else if(a=='L') cout<<'K';
        else if(a=='K') cout<<'J';
        else if(a=='J') cout<<'H';
        else if(a=='H') cout<<'G';
        else if(a=='G') cout<<'F';
        else if(a=='F') cout<<'D';
        else if(a=='D') cout<<'S';
        else if(a=='S') cout<<'A';
        else if(a=='/') cout<<'.';
        else if(a=='.') cout<<',';
        else if(a==',') cout<<'M';
        else if(a=='M') cout<<'N';
        else if(a=='N') cout<<'B';
        else if(a=='B') cout<<'V';
        else if(a=='V') cout<<'C';
        else if(a=='C') cout<<'X';
        else if(a=='X') cout<<'Z';
        else cout<<a;
    }
    return 0;
}
