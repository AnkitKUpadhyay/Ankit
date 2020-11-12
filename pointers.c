#include<stdio.h>
void main()
{
int count=10, x;
int *int_pointer;
int_pointer=&count;
x=*int_pointer;
printf("x=%d and count=%d\n",x, count);
}