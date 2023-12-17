#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
int x;
int y;

srand(time(NULL));

x = rand() % 480 + 1; /* 0 to 480 */
y = rand() % 272 + 1; /* 0 to 272 */

{
printf("x = %d\ny = %d\n",x,y);
}
return 0;
}
