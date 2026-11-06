//write a program to print the fibonacci series
#include<stdio.h>
int main()
{
int n,a=0,b=1,c,i;
printf("enter the number of term......\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    printf("%d\n",a);
    c=a+b;
    a=b;
    b=c;


}
return 0;}
