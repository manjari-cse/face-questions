#include <stdio.h>

int main()
{
    int r,c,a[10][10],b[10][10],i,j,x;
    scanf("%d %d",&r,&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        scanf("%d",&a[i][j]);
    }
      printf("\n");
    for(i=0;i<r;i++)
    {
        for(j=r-1;j>=0;j--)
        {
            printf("%d ",a[j][i]);
            b[i][x++]=a[j][i];
        }
        printf("\n");
    }
return 0;
