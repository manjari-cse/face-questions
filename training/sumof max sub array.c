
#include <stdio.h>

int main()
{
       int n,a[100],sum=0,i,j,max=0;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
  sum=a[0];
  max=a[0];
  for(i=1;i<n;i++)
  {
      if(a[i]>a[i-1])
      {
          sum=sum+a[i];
      }
      else
      {
          sum=a[i];
      }
  if(sum>max)
  {
      max=sum;
  }
  }
  printf("%d",max);

    return 0;
}
