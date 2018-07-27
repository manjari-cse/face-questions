#include<stdio.h>
void main()
{float value;
int i,count=0,num;
	scanf("%d",&num);
	for(i=2;i<num;i++)
	{
		if(num%i==0)
		count++;
	}
	if(count==0)
	{
		value=num*num;
		printf("%.0f",value);
	}
	else
	{	value=num/2.0;
		if(num%2==0)
		printf("%.0f",value);
		else
	printf("%.2f",value);
	
		
	}
	
	
}
