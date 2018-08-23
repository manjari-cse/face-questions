#include <stdio.h>

#include <math.h>

 

void main()

{

    float m1, c1, m2, c2,x1, y1, x2, y2,dx, dy,i_X, i_Y;
    scanf("%f %f", &x1,&y1);
    scanf("%f %f", &x2,&y2);

 

    dx = x2 - x1;

    dy = y2 - y1;

 

    m1 = dy / dx;
    c1 = y1 - m1 * x1; 


    scanf("%f %f", &x1,&y1);
    scanf("%f %f", &x2,&y2);
 dx = x2 - x1;
 dy = y2 - y1;
 m2 = dy / dx;
 c2 = y1 - m2 * x1;

        i_X = (c2 - c1) / (m1 - m2);

        i_Y = m1 * i_X + c1;
        
if(i_X==-0.00)
{
   i_X=0.00; 
}


   printf("%.2f, %.2f\n", i_X, i_Y);


}
