#include<stdio.h>
int i=3,val=0;
int m(int n)
{
    if(n==0||n==1||n==2)/*for input 1 and 2 no possibility*/
    return 0;
    while(i<=n)
    {
    val= val*2+2;/*if 4, 4 can be placed before 3 and it can be reversed;after that we are taking 3's posiibility and inserting 4 before and after 3 so we get 12 possibility so 12+2=14*/
    i++;
    }
    return val;
}
void main()
{
    int n;
    scanf("%d",&n);
    printf("%d",m(n));
}
