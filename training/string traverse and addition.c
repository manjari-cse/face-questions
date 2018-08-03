#include<stdio.h>
void main()
{
char s[50];
int i,c=0,sum=0,d;
scanf("%[^\t]s,",s);
for(i=0;s[i]!='\0';i++)
{
if(s[i]==',')
{
c++;
if(c%2!=0)
{
char *m=&s[i+1];
d=atoi(m);
sum=sum+d;
}
}
}
printf("%d",sum);
}
