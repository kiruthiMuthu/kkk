#include<stdio.h>
int main()
{
int n;
printf("enter any number");
scanf("%d",&n);
if(n>0)
{
printf("positive number");
}
else if(n<0)
{
printf("negative number");
}
else if(n==0)
{
printf("the number is zero");
}
return 0;
}
