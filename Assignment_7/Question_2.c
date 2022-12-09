#include<stdio.h>
int main()
{
    int n,a=0,b=1,c,i;
    printf("Enter the number\n");
    scanf("%d",&n);
    printf("The Fibonacci series is \n");
    printf("%d\n",a);
    printf("%d\n",b);
    for(i=2;i<n;i++)
    {
        c=a+b;
        a=b;
        b=c;
        printf("%d\n",c);
    }
    return 0;
}
