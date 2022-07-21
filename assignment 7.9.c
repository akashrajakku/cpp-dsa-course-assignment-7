
#include <stdio.h>

int main()
{
int n,p,s=0,a;
printf("enter a number:");
scanf("%d",&n);
a=n ;
while(n!=0)
{
  p= n%10 ;
  s= s + (p*p*p);
  n=n/10;
}
printf("%d",s);
if (s==a)
printf("armstrong number");
else
printf(" not an armstrong number");

return 0;
}