#include<stdio.h>

void main()
{
int ba, i, size, op;
printf("Enter base address\n");
scanf("%d", &ba);
printf("Enter index\n");
scanf("%d", &i);
printf("Enter size of element\n");
scanf("%d", &size);
op=ba+((i-1)*size);
printf("Address of %d^th Element: %d\n", i, op);
}
