
#include <stdio.h>

int main()
{
    int i,t1=0,t2=1,t3,n,flag=0;
    printf("enter the number :");
    scanf("%d",&n);
for(i=2;i<n;i++)
    {
        t3=t1+t2 ;
        if(t3==n)
        {
            flag=1;
            break;
        }
        t1=t2;
        t2=t3;
    }
    if(flag==1)
    printf("The number is in fibonacci series");
    else
    printf("The number is not in fibonacci series");
return 0;
}
