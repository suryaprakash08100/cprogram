#include<stdio.h>
int main()
{
int a,fact=0;
printf("Enter a number: ");
scanf("%d",&a);
for(i=0;i<a;i++)
fact=fact*i;
printf("%d",fact);
}
