#include <stdio.h>
#include <math.h>
main() {
    int num,rem,originalnum,sum,v, c = 0 ;
    printf("enter the value:");
    scanf("%d",&num);
    originalnum=num;
    v=originalnum;
         while(num>0)
    {
        num=num/10;
        c++;
    }
    printf("no of digits %d\n",c);
    for (sum = 0; originalnum>0; originalnum=originalnum/10) {
        rem = originalnum %10 ;
        sum=sum+pow(rem,c);
    }
    printf("%d\n",sum);
    if(v==sum) {
        printf("given number is armstrong number");
    }
    else
        printf("given number is not armstrong number");
}