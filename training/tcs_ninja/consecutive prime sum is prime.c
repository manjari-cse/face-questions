/*
ip=20
o/p 
2
3
5
7
11
13
17
19
2
explanation: : 5 = 2 + 3, 17 = 2 + 3 + 5 + 7, 41 = 2 + 3 + 5 + 7 + 11 + 13*/

#include <stdio.h>

int main()
{
int n,n2,i,c=0,count=0,a[100],j,sum=0,k,cn=0;
scanf("%d",&n);
for(i=2;i<=n;i++)
{cn=0;
    for(k=2;k<i;k++)
{
    if(i%k==0)
    {
        cn++;
    }
}
if(cn==0)
{
    printf("%d\n",i);
        a[c]=k;
        c++;
}
}
for(i=2;i<c;i++)
{sum=0;
    for(j=0;j<i;j++)
    {
        sum=sum+a[j];
    if(sum==a[i])
    {
    count++;
    //printf("%d ",a[i]);
    break;
    }
}
}
printf("%d",count);
    return 0;
}

