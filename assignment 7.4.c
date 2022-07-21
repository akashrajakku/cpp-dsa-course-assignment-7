
#include <stdio.h>

int main()
{
    int a,b,i,LCM,HCF;
    printf("enter 2 number you want hcf of :");
    scanf("%d %d",&a,&b);
    for(i=1;i<=a*b;i++)
    {
        if ((i%a==0) && (i%b==0))
        {
            break;
        }
    }
    LCM = i ;
    HCF = (a*b)/LCM;
    printf("HCF is %d",HCF);
return 0;
}
