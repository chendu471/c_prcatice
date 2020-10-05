#include<stdlib.h>
#include<stdio.h>

int main(void)
{
#if 1

	int n,i,j,val1=0,val2=0,res=0;
	printf("Enter number of elements for array");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{

		scanf("%d",&arr[i]);
	}

	for(i=0;i<n;i++)
	{
		val1=0;
		for(j=i+1;j<n;j++)
		{
			if(arr[i]==arr[j])
				val1++;
		}
		if(val2<val1)
		{
			val2=val1;
			printf("val2 %d arr %d\n",val2,arr[i]);
			res=arr[i];
		}
	}
	printf("res %d",res);
#endif
	return 0;
}
