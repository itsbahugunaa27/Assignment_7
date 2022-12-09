#include<stdio.h>
int main()
{
    int a,b,i,flag,n;
    printf("Enter two numbers to print between prime numbers\n");
    scanf("%d%d",&a,&b);
    for(n=a;n<b;n++)
    {
        flag=0;
        for(i=2;i<n/2;i++)
    {
        if(n%i==0)
        {
           flag=1;
            break;
        }
    }
    if((flag==0)&&(n!=1))
    {
        printf("%d ",n);
    }
       }
    return 0;
}
