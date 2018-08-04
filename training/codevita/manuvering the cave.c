#include <stdio.h>

int total_ways_wrapper(int cr,int cc,int m, int n)
{
if(cr>m-1||cc>n-1)
  return 0;
 if(cr==m-1&&cr==n-1)
   return 1;
 return total_ways_wrapper(cr,cc+1,m,n)+total_ways_wrapper(cr+1,cc,m,n);
}

int main() {
	//code
	int m,n,cc=0,cr=0;
	scanf("%d %d", &m, &n);
	
	printf("%d",total_ways_wrapper(cr,cc,m,n));
	return 0;
}
