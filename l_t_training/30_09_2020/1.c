#include<stdlib.h>
#include<stdio.h>
int main(void)
{
printf("Enter integer : ");
int num,count=0;
scanf("%d",&num);

while(num)
{
//printf("%d ",num%2);

if(num%2==1)
{
count++;
}
num/=2;

}
printf("cnt %d\n",count);

return 0;
}

