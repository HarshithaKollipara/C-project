void main()
{
int n,i,c=0;
printf("enter value of number:");
scanf("%d",&n);
for (i=2;i<n;i++)
{
if(n%i==0)
  c++;
}
   if(c==2)
   {
   printf("given number is not a prime");
   }
   else
   {
   printf("given number is a prime ");
   }
   }