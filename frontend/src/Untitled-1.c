
#include<stdio.h>
int  main()
{
	int n;
	scanf("%d",&n);
	while(n>0)
{
	if(n/2!=0 && n/1==0)
	{
		printf("prime");
	}
	else
	{
		printf("not prime");
	}
}
   return 0;
}