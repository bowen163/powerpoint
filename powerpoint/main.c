#include <stdio.h>
#include<stdlib.h>
int main()
{
    static signed int i=0xAABBCCDD;
    char *p;
    p=(char *)&i;
    printf("p=%x\n",p);
    printf("&i=%x\n",&i);
    printf("*(p+3)=%x\n",*(p+3));
    printf("*p=%x\n",*p);
    return 0;
}
