/*
ip 56
op 840*/
#include <stdio.h>

int main(void) {
	int i,value,ans=1,sum=0,r;
	scanf("%d",&value);
	while(value!=0)
	{ans=1;
	    r=value%10;
	for(i=r;i>=1;i--)
	ans=ans*i;
	sum=sum+ans;
	value=value/10;
}
	printf("%d",sum);
	return 0;
}
