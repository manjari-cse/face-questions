#include <stdio.h>

#define MAX_HOUSES 50

#define MAX(a, b) (a>b) ? a : b

int max_stealing_wrapper(int house_values[], int n,int cs,int cache[])
{
  if(cs>=n)
  {
    return 0;
  }
  if(cache[cs]!=-1)
   return cache[cs];
 int stolen=(house_values[cs]+max_stealing_wrapper(house_values,n,cs+2,cache));
 int notstolen=max_stealing_wrapper(house_values,n,cs+1,cache);
 cache[cs]=MAX(stolen,notstolen);
 return cache[cs];
	
}

int main() {
	//code
	int n, house_values[MAX_HOUSES], i,cache[MAX_HOUSES],cs=0;
	
	// Total houses
	scanf("%d", &n);
	
	// Values at each house
	for(i = 0; i < n; i++)
	{
	    scanf("%d", &house_values[i]);
	}
	for(i = 0; i < n; i++)
	{
	    cache[i]=-1;
	}
	
	printf("%d", max_stealing_wrapper(house_values, n,cs,cache));
	return 0;
}
