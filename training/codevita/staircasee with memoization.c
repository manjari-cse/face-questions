#include <stdio.h>

int find_total_ways(int n,int cs,int arr[])
{int total;
   if(cs>n)
   return 0;
   if(cs==n)
   return 1;
   if(arr[cs]!=-1)
   return arr[cs];
   total= find_total_ways(n,cs+1,arr)+find_total_ways(n,cs+2,arr);
   arr[cs]=total;
   return total;
  
}

int main() {
	//code
	int n,i,arr[100],cs=0;
	scanf("%d", &n);
  for(i=0;i<n;i++)
    arr[i]=-1;
	printf("%d", find_total_ways(n,cs,arr));
	return 0;
}
