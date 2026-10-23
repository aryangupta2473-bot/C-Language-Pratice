//   write a program to calculate the total and average marks of 5 subects
#include<Stdio.h>
int main()
{
int phy ,che,math,hindi,eng,total, avg;
printf(" plese enter the marks of 5 subjects :\n");
scanf("%d %d %d %d %d ",&phy,&che,&math,&hindi,&eng );
total=phy+che+math+hindi+eng ;
printf("toatl marks:%d\n",total);
avg=total/5;
printf("average marks: %d\n",avg);
return 0;




}
