#include<stdio.h>

void main()
{
int ba, row, clm, i, j, major, size, result;
printf("Enter base address\nTotal no of rows\ntotal no of columns\nIndex(i,j)\nFor row major 0, for column major 1\nSize of element\n");
scanf("%d %d %d", &ba, &row, & clm);
scanf("%d %d %d %d", &i, &j, &major, &size);

if(major==0)
{
result=ba+((i-1)*clm+(j-1))*size;
printf("Address of (i,j)^th element is %d\n", result);
}
else
{
result=ba+((j-1)*row+(i-1))*size;
printf("Address of (i,j)^th element is %d\n", result);
}
}
