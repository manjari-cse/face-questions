/*
diff of max and min of elements before the max num;
i/p 7
2 3 10 6 4 8 1
o/p 10-2=8
*/
#include<stdio.h>
void main()
{
	int n,a[100],i,t,j,max,min,b;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	max=a[0];
	for(i=0;i<n;i++)
	{
	if(a[i]>max)
	{
		max=a[i];
		b=i;
	}
	}
	min=a[0];
	for(i=0;i<b;i++)
	{
		if(a[i]<min)
		{
			min=a[i];
		}
	}
	printf("%d",max-min);
}
