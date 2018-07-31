#include<stdio.h>
int main()
{
 int i,n,a[100],key,j,t;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 scanf("%d",&key);
 for(i=0;i<=key;i++)
 {t=a[0];
    for(j=1;j<n;j++)
    {
        a[j-1]=a[j];
    }
    a[n-1]=t;
 }
 
 for(i=0;i<n;i++)
 printf("%d ",a[i]);
 return 0;
}
