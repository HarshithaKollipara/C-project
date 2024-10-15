#include<stdio.h>
 main()
{
int dec,rem,i=1,bin=0;
printf(" enter the decimal number is:");
scanf("%d",&dec);

while(dec!=0)
{
rem=(dec%2);
dec/=2;
bin=bin+rem*i;
i=i*10;
}
printf("binary equivalent of  the number is: %d",bin);

}
    