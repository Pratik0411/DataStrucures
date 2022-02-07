#include<stdio.h>

void main()
{
	int r, c;
	printf("Enter row and column\n");
	scanf("%d%d", &r, &c);
	int a[r][c];
	printf("Enter the elements\n");
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	printf("Row No   Column No   Data\n");
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			if(a[i][j]!=0)
			{
				printf("%d        %d           %d\n",i+1,j+1,a[i][j]); 
			}
		}
	}

}
