/* ip = 4 16
    op= 3 */
    
#include <stdio.h>

int main()
{int n1,n2,i,j,count=0,odd=0;
   scanf("%d %d",&n1,&n2);
   for(i=n1;i<=n2;i++)
   {odd=0;
       for(j=1;j<=i;j++)
       {
           if(i%j==0)
           odd++;
       }
       if(odd%2==1)
       {
           count++;
       }
   }
   printf("%d",count);

    return 0;
}
