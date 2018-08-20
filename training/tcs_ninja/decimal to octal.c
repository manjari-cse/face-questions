
#include <stdio.h>

int main()
{
   int n,r,oct=0,base=1;
   scanf("%d",&n);
   while(n>0)
   {
       r=n%8;
       oct=r*base+oct;
       base=base*10;
       n=n/8;
   }
   printf("%d",oct);

    return 0;
}
