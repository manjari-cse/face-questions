
#include <stdio.h>
#include<math.h>

int main()
{long int bin,flag=0,r,val=1,dec=0,i=0,n=0;
    scanf("%ld",&bin);
    while(bin>0)
    {
        r=bin%10;
    
        dec=dec+r*pow(2,i);
        i++;
        bin=bin/10;
    }
printf("%ld",dec);
    return 0;
}
