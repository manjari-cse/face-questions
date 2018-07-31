#include <stdio.h>

int main()
{
    int i,n,a[100],key,pos;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 scanf("%d",&key);
 n++;
 printf("\nposition");
 scanf("%d",&pos);
 for(i=n-1;i>pos;i--)
 {
     a[i]=a[i-1];
 }
 a[i]=key;
 for(i=0;i<n;i++)
 printf("%d ",a[i]);
 

    return 0;
}
