 //WAP to perfrom arithmetic operations using the user's  choice
 #include<stdio.h>
int main()
{
    int a,b,ch,add,sub,mul,div,rem;
    printf("enter user choice:");
    scanf("%d",&ch);
    printf("enter two number:");
    scanf("%d%d",&a,&b);
    if(ch==1)
    {add=a+b;
    printf("addtion :%d",add);}
    else if(ch==2)
    {sub=a-b;
    printf("subtraction:%d",sub);}
    else if(ch==3)
    {mul=a*b;
    printf("multiply:%d",mul);}
    else if(ch==4)
    {div=a/b;
    printf("division:%d",div);}
    else if(ch==5)
    {
        rem=a%b;
        printf("remainder:%d",rem);}
    else
    {
        printf("invalid choice!");}
    return 0;
}
