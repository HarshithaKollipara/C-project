void main()
{
int n;
printf("enter value of n:");
scanf("%d",&n);
if(n<=50)
{
printf("total electricity bill :%f",n*(0.50));
}
else if(50<n && n<=100)
{
printf(" total electricity bill:%f",n*(0.75));
}
else if(100<n && n<=250)
{
printf("total electricity bill :%f",(n*(1.20)));
}
else
{
printf("total electricity bill:%f",(n*(1.50)));
}

}