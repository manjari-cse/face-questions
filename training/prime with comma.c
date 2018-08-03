
#include <stdio.h>

int main()
{int n,i,count=0,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {count=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                count++;
            }
        }
        if(i==1)
        printf("%d,",i);
        if(i==2)
        {
        if(count==2)
        printf("%d",i);
        }
         if(count==2)
        printf(",%d",i);
    }

    return 0;
}
