#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main(void)
{
	char str[]="technologies";
	int n=strlen(str);
	char result[50]={NULL};
	int i,j,k,count;

	for(i=0;i<n;i++)
	{

		count=0;k=0;
		while(result[k]!=0)
		{
//			printf(" k::%d\n",k);
			if(str[i]==result[k])
			{
//				printf("here\n");
				count++;
				break;								

			}	
			k++;
		}	
		if(count==0)
		{
			count=0;
			for(j=i+1;j<n;j++)
			{	
				if(str[i]==str[j] )
				{
					count++;
					result[k]=str[i];
					break;
					//	printf("k=%d result_len=%d %c %d\n",k,strlen(result),str[i],count);
				}

			}
		}

		if(count==0)
			printf("%c",str[i]);
	}
//	printf("\n%s",result);

	return 0;
}
