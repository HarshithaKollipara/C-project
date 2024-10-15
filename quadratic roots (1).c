#include<math.h>
void main()
{
int a,b,c,d;
float x1,x2,imag,real;

printf("enter value of a,b,c:");
scanf("%d %d %d",&a,&b,&c);
d=(b*b)-(4*a*c);
if(d>0)
{
  printf("\nroots are real and distant");
  x1=(-b+sqrt(d))/(2*a);
  x2=(-b-sqrt(d))/(2*a);
  printf("\nroots of given quadratic equation is %f and %f",x1,x2);
}
else if(d==0)
{ 
  printf("\nroots are real and equal");
  printf(" \nrepeated root of quadratic equation is %f",x1);
}
else
{
  printf("\nroots are imaginary");
  real=(-b)/(2*a);
  imag=sqrt(-d);
  printf("\n x1=%f+%fi x2=%f+%fi",real,imag,real,imag);
}
}








    