#include<stdio.h>
#include<math.h>
int main()
{
int n,count=0,r,c,arm=0;
printf("Enter the number\n");
scanf("%d",&n);
c=n;
while(c!=0)
{
    c=c/10;
    count++;
}
c=n;
while(c!=0)
{
    r=c%10;
    arm=arm+pow(r,count);
    c=c/10;
}
c=n;
if(arm==n)
{
    printf("%d is armstrong number",c);
}
else
{
    printf("%d is not armstrong number",c);
}
 return 0;
}
