#include<stdlib.h>
#include<stdio.h>
#include<string.h>
int main(void)
{
	char str[20],temp;
	int num=0,len,i=0,j=0;
	scanf("%s%d",str,&num);
	len=strlen(str);
	for(i=0;i<num;i++)
	{
		temp=str[len-1];
		for(j=len-1;j>0;j--)
		{
			str[j]=str[j-1];
		}
		str[0]=temp;
	}
	printf("%s\n",str);
	return 0;
}
