#include <stdio.h>

int main()
{int a=0,b=1,c=2,d;

d=a++||b++||c++;
printf("%d %d %d %d",a,b,c,d);

    return 0;
}
