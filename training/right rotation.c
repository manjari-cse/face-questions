#include <stdio.h>

int main()
{
    int i,n,a[100],key;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 scanf("%d",&key);
 n++;
 for(i=n-1;i>=1;i--)
 {
     a[i]=a[i-1];
 }
 a[0]=key;
 for(i=0;i<n;i++)
 printf("%d ",a[i]);
 

    return 0;
}
