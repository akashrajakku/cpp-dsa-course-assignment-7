
#include <stdio.h>

int main()
{
    int i,t1=0,t2=1,t3,n;
    printf("enter the number :");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        t3=t1+t2 ;
        t1=t2;
        t2=t3;
    }
    printf("%d",t3);
    
return 0;
}
