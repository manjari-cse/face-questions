/*i/p:00:55:12
       12:23:45
   o/p:12:31:27*/
   /*i/p:08:58:3
         07:58:5
     o/p:00:59:58*/
     #include<stdio.h>
void main()
{int hr1,min1,sec1,hr2,min2,sec2,hr3,min3,sec3;
    scanf("%d:%d:%d",&hr1,&min1,&sec1);
    scanf("%d:%d:%d",&hr2,&min2,&sec2);
   // if(hr1>hr2)
    //{
    if(sec1<sec2)
    {
        sec1=sec1+60;
        sec3=sec1-sec2;
        min1=min1-1;
    }
    else
    {
        sec3=sec1-sec2;
    }
      if(min1<min2)
    {
        min1=min1+60;
        min3=min1-min2;
        if(hr1==0)
        hr1=hr1-0;
        else
        hr1=hr1-1;
        
    }
    else
    {
        min3=min1-min2;
    }
    if(hr1==0)
    hr3=hr2-hr1;
    else
    hr3=hr2-hr1;
printf("%d:%d:%d",hr3,min3,sec3);
}
