#include<stdio.h>
extern int abc;

void fun()
{
printf("2.c%d %x\n ",abc,&abc);
abc = 200;
printf("2.c%d\n",abc);
}


