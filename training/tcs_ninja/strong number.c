/* ip 145 op = strong number
  ip=143 o/p=not */
  #include<stdio.h>
void main()
{
    int n,a,sum=0,val=1,r;
    scanf("%d",&n);
    a=n;
    while(n>0)
    {val=1;
        r=n%10;
        while(r>0)
        {
            val=val*r;
            r--;
        }
        //printf("%d ",val);
        sum=sum+val;
        n=n/10;
    }
    //printf("%d",sum);
    if(sum==a)
    printf("Strong number");
    else
    printf("Not a strong number");
}
