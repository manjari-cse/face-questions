/* i/p=599 o/p=600
    i/p-15  o/p=10*/
    
#include <stdio.h>

int main()
{
int n,a;
scanf("%d",&n);
a=n%10;
if(a>5)
{
    n=n+(10-a);
}
else
{
    n=n-a;
}
printf("%d",n);
    return 0;
}
