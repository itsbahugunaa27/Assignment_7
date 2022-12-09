#include<stdio.h>
int main()
{
    int n,i,a=0,b=1,c;
    printf("Enter the number\n");
    scanf("%d",&n);
   for(i=2;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;
    }
    printf("The %dth term of the Fibonacci series is %d ",n,b);
    return 0;
}
