#include<stdio.h>
int main()
{
    int i,flag,n;
    for(n=1;n<100;n++)
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
