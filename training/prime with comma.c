
#include <stdio.h>

int main()
{int n,i,count=0,j,flag=0;
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
        if(flag==0)
        {
        printf("%d",i);
         flag=1;
        }
        if(flag==1)
        {
        printf(",%d",i);
        }
    }

    return 0;
}
