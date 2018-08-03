
#include <stdio.h>
#include<math.h>

int main()
{int n,exe,i,j,count=0,a[100][100];
    scanf("%d",&n);
    exe=ceil((double)n/2);
    for(i=0;i<exe;i++)
    {
        for(j=i;j<=n-i-1;j++)
        {
            a[i][j]=++count;
        }
        for(j=i+1;j<=n-i-1;j++)
        {
            a[j][n-i-1]=++count;
        }
        for(j=n-i-2;j>=i;j--)
        {
            a[n-i-1][j]=++count;
        }
         for(j=n-i-2;j>i;j--)
        {
            a[j][i]=++count;
        }
        
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d",a[i][j]);
        }
    }
return 0;
}
    return 0;
