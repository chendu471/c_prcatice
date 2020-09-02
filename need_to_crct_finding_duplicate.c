#include<stdlib.h>
#include<stdio.h>
int main(void)
{

	int m,n;
	scanf("%d%d",&m,&n);		//get length of arrays from user
	int array1[m],array2[n],array3[m+n],i,j,count=0,array4[m+n],temp=0,temp1=0;
	for(i=0;i<m+n;i++)
	{
		array4[i]=0;
	}	

	for(i=0;i<m;i++)
	{
		scanf("%d",&array1[i]);

		array3[i]=array1[i];
	}
	for(i=0;i<n;i++)
	{
		scanf("%d",&array2[i]);
		array3[i+m]=array2[i];
	}

	for(i=0;i<m+n;i++)
	{
		for(j=i+1;j<m+n;j++)
		{
			if(array3[i]==array3[j])
			{

				//	printf("here %d\n",array3[i]);		
				for(temp1=0;temp1<=temp-1;temp1++)
				{	
					if(array3[i]==array4[temp1])
					{

						//printf("here\n");		
						break;}

				}

				if(temp1==temp)
				{
					array4[temp++]=array3[j];
						count++;
				}

			}

		}

	}	
	printf("\n%d\n",count);
	for(i=0;array4[i]!=0;i++)
		printf("%d ",array4[i]);

	return 0;
}
