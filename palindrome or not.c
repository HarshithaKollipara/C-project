#include<stdio.h>
int main()
{   
int num,remainder,originalnum,reversed;
  printf("Enter the number:");
  scanf("%d",&num);
  originalnum=num;
  reversed=0;
  while(num!=0)
  {
  remainder=num%10;
  reversed=reversed*10+remainder;
  num=num/10;
  }
  if(originalnum==reversed)
  {
  printf("The number is a palindrome" );
  }
  else
  {
  printf("The number is not a palindrome ");
  }
}         









    