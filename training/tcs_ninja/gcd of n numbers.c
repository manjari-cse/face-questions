#include<stdio.h>
void main()
{
	int n,a[100],i,small,count=0,j,gcd=1;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	small=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]<small)
		small=a[i];
	}

	for(i=1;i<=small;i++)
	{count=0;
	    for(j=0;j<n;j++)
	    {
	        if(a[j]%i==0)
	        {
	            count++;
	        }
	    }
	    if(count==n)
	    {
	        gcd=i;
	    }
	}
		printf("%d",gcd);
}
