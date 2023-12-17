//http://uva.onlinejudge.org/external/4/494.html
#include <stdio.h>

//under construction

int main()
{
    char ch;
    int charCount=0,count=0,wordEnd=0,word=0,wordStart=0;

    while((ch = getchar()) != EOF)
    {
        if(ch==10)
        {
            printf("%d\n",word);
            count = 0;
            word=0;
            wordEnd=0;
            charCount=0;

        }

        else if( (ch>=65 && ch<=90) || (ch>=97 && ch<=122) )
        {
            if(wordEnd==1)
            {
                word=word+1;
            }

            if(charCount==0 && wordEnd==0)
            {
                word+=1;
            }

            count=word;

            wordEnd=0;
            charCount++;
        }
        else if( (ch<65 || ch>90) && (ch<97 || ch>122) )
        {
            wordEnd=1;
        }
    }
    return 0;
}
