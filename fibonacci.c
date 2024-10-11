#include <stdio.h>

int old;
int cur; 

void main ()
{
    old=1;
    cur=1;
    printf("%d \n",old);
    while (cur<100)
    {
        printf("%d \n",cur);
        cur+=old; //old+=n means old= old+n
    }
}