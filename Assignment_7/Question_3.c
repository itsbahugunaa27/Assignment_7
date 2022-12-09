#include<stdio.h>
int main()
{
    int n,m,i,a=0,b=1,c,f=0;
    printf("Enter the number\n");
    scanf("%d",&n);
    printf("Enter the number to check in fibonacci series\n");
    scanf("%d",&m);
    for(i=2;i<n;i++)
    {
        c=a+b;
        if(m==c)
            f=1;
            a=b;
            b=c;
    }
    if(f==1)
    {
        printf("Yes present");
    }
    else
    {
        printf("Not Present");
    }


    return 0;
}
