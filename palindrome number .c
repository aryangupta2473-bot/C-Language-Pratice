// write a program to check a number is palindrome or not
#include<stdio.h>
int main()
{
int r,n,c,s=0;
printf("enter the number");
scanf("%d",&n);
c=n;
while(n>0)
{
    r=n%10;
    s=r+(s*10);
    n=n/10;
}
if(c==s)
printf("Palindrome number");
else
printf("not");
return 0;


}
