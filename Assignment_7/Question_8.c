#include<stdio.h>
int main()
{
    int a,b,i,flag,n;
    printf("Enter a number to print next prime number of a given number\n");
    scanf("%d",&a);
    for(n=a;n<100;n++)
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
        break;
    }
       }
    return 0;
}
