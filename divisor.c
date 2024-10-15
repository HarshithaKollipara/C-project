#include<stdio.h>
void main()
{
int i,X,Y,a,b;
printf("enter values of X and Y:");
scanf("%d%d",&X,&Y);
printf("enter divisors a abd b");
scanf("%d%d",&a,&b);
for(i=X;i<=Y;i++)
 {
   if(i%a==0 && i%b==0)
   {
     printf("\n %d is divisble by both %d and %d",i,a,b);
   }
 }
}








    