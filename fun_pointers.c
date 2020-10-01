#include<stdlib.h>
#include<stdio.h>
int sum(int a,int b)
{

return a+b;
}

int sub(int a,int b)
{

return a-b;
}

void fun(int (*ad)(int,int),int (*su)(int,int))
{
		


}

int main(void)
{
int (*add)(int,int);
int (*minus)(int,int);

add=sum;
minus=sub;

printf("%d %d\n",(*add)(4,5),(*minus)(6,5));


return 0;
}




