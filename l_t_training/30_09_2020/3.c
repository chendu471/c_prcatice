#include<stdlib.h>
#include<stdio.h>
#include<string.h>
int main(void)
{
	char str[50],result[50]={NULL};
	int i,len,j,count,k,count1=0;
	printf("Enter string : ");
	scanf("%s",str);
	len=strlen(str);

	for(i=0;str[i]!=NULL;i++)
	{
		for(j=i+1;str[j]!=NULL;j++)
		{
			count1=0;

			if(str[i]==str[j])
			{

				count=0;k=0,count1++;
				while(result[k])
				{
					if(str[i]==result[k++])
					{
						count++;
						break;
					}

				}		
				if(!count)
				{
					result[k]=str[i];
					break;
				}


			}

		}
		if((!count1) && (!count))
			printf("%c",str[i]);


	}
	printf("\n%s\n",result);



	return 0;
}

