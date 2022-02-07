#include<stdio.h>

void main()
{
int i, j, nz, a, b;
int size=4;
printf("Enter size of matrix (m,n)\nEnter number of non zero elements\n");
scanf("%d%d%d", &i, &j, &nz);
a=i*j*size;
b=nz*size*size;
if(a>b)
{
printf("Sparse Matrix is better\n");
}
else
{
printf("Lenear representation is better\n");
}
}
