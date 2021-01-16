//print seconds from entered time duration from 00:00:00 ,

#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#define debug 0

int main(void)
{

	char str[10];
	int hh,mm,ss,i=0,arr[3];
	printf("Enter time in format HH:MM:SS ");
	//scanf("%d:%d:%d",&arr[0],&arr[1],&arr[2]);
	scanf("%s",str);

#if 1
	sscanf(str,"%d%c%d%c%d",&hh,&str[2],&mm,&str[5],&ss);

#endif
#if 0

	char *p,val[2];
	p=strtok(str,":");

	arr[i++]=atoi(p);

	while(1)
	{
		p=strtok(NULL,":");
		if(p==NULL)
			break;
		arr[i++]=atoi(p);
		//printf("%d\n",arr[i-1]);

	}
	hh=arr[0];mm=arr[1];ss=arr[2];
#endif

	if(ss>59)
	{
		ss=ss-60;
		mm++;
		while(ss%59>59)
		{
			ss=ss-60;
			mm++;
		}
	}
#if debug
	printf("hh %d mm %d ss %d\n",hh,mm,ss);
#endif
	if(mm>59)
	{
		mm=mm-60;
		hh++;
		while(mm%59>59)
		{
			mm=mm-60;
			hh++;
		}

	}
#if debug
	printf("hh %d mm %d ss %d\n",hh,mm,ss);
#endif
	if(hh>23)
	{
		while(hh%23>23)
		{
			hh=hh-24;
		}
		hh=hh-24;
#if debug
		printf("hh %d mm %d ss %d\n",hh,mm,ss);
#endif
	}

	printf("%d",(hh*60*60)+(mm*60)+ss);
	return 0;
}
