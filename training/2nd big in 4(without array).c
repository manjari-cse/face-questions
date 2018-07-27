#include<stdio.h>
void main()
{
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if((a<b&&a>c&&a>d)||(a<c&&a>b&&a>d)||(a<d&&a>b&&a>c))
    printf("%d",a);
    else if((b<a&&b>c&&b>d)||(b<c&&b>d&&b>a)||(b<d&&b>a&&b>c))
    printf("%d",b);
    else if((c<a&&c>b&&c>d)||(c<b&&c>a&&c>d)||(c<d&&c>a&&c>b))
    printf("%d",c);
    else
    printf("%d",d);
}
