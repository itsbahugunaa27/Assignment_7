#include<stdio.h>
int main()
{
    int x,count=0;
    printf("Enter a numnber\n");
    scanf("%d",&x);
    while(x!=0)
    {
    count++;
        if(x&1)
            break;
        else
            x=x>>1;
    }
    printf("First 1 from LSB at %d",count);
    return 0;
}
