/* ip= 122
op=3*/

#include <stdio.h>

int main()
{int n,rev,sum=0,r;
scanf("%d",&n);
while(n>0)
{
    r=n%10;
    rev=rev*10+r;
    n=n/10;
}
printf("%d ",rev);
while(rev>0)
{
    r=rev%10;
    sum=sum+r;
    rev=rev/100;
}
    printf("%d",sum);

    return 0;
}
