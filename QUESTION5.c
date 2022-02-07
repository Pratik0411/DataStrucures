#include<stdio.h>
#include<string.h>

void main()
{
	int a[4], b[4], c[4];
	printf("enter first equation\ndont put x\n");
	for(int i=0;i<4;i++)
	{
		scanf("%d",&a[i]);
	}

	printf("enter second equation\n");
	for(int i=0;i<4;i++)
	{
		scanf("%d",&b[i]);
	}

	for(int i=0;i<4;i++)
	{
		c[i]=a[i]+b[i];
	}
	
	printf("Addition of given polynomial is\n");
	printf("%dx^0+%dx^1+%dx^2+%dx^3\n", c[0], c[1], c[2], c[3]);
}
