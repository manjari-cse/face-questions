/*i/p:nearest to 10 div by 
o/p 12
i/p:8 5
o/p=10
i/p 7 5
o/p 5*/
#include<stdio.h>
void main()
{int m,n,ans,c;
	scanf("%d %d",&n,&m);
if(n%m==0)
{
	ans=n+m;
}
else
{
	c=n%m;
	if(c>m/2)
	{
		ans=m-c;
		ans=n+ans;	
	}
	else
		ans=n-c;

}
printf("%d",ans);
}
