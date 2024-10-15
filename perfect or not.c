#include<stdio.h>
void main()
{
int num,i,sum=0;
printf("enter value of number:");
scanf("%d",&num);
for(i=1;i<=(num-1) ;i++)
{
if(num%i==0)
  {
  sum=sum+i;
  }
}
if(sum==num)
{  
  printf("given number is perfect number");
}
else
{
  printf("given number is not a perfect number");
}
}








    