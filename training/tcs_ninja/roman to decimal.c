
#include <stdio.h>
#include<string.h>
int convert(char a)
{
    switch(a)
    {
        case 'I':
        return 1;
        case 'V':
        return 5;
        case 'X':
        return 10;
        case 'L':
        return 50;
    
    }
}

int main()
{char s[100],dec,pre,len,i;
scanf("%s",s);
len=strlen(s);
for(i=0;i<len;i++)
{
    dec=dec+convert(s[i]);
    if(i>0)
    {
        pre=convert(s[i-1]);
        if(pre<convert(s[i]))
        {
            dec=dec-2*pre;
        }
    }
}
printf("%d",dec);

    return 0;
}
//alternate way

#include <stdio.h>
#include<string.h>
int convert(char a)
{
    switch(a)
    {
        case 'I':
        return 1;
        case 'V':
        return 5;
        case 'X':
        return 10;
        case 'L':
        return 50;
    
    }
}

int main()
{
char s[100];
int len,i,a[100],dec=0;
scanf("%s",s);
len=strlen(s);
for(i=0;i<len;i++)
{
a[i]=convert(s[i]);
}

dec=a[len-1];
for(i=len-1;i>0;i--)
{
  if(a[i-1]>=a[i])
  {
      dec=dec+a[i-1];
  }
 
  else
  {
      dec=dec-a[i-1];
  }
}
printf("%d",dec);
    return 0;
}
