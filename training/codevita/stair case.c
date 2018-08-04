#include <stdio.h>

long int find_total_ways(int n,int cs)
{
    if(cs==n)
     return 1;
    if(cs>n)
      return 0;
    return find_total_ways(n,cs+1)+find_total_ways(n,cs+2);
}

int main() {
	int n,cs=0;;
	scanf("%d", &n);
	printf("%ld", find_total_ways(n,cs));
	return 0;
}
