#include<stdio.h>
void sortA(int m, int x[ ])
{
  int i, j, t;                                            
  for(i = 1; i <= m-1; i++) 
  {
  	for(j = 1; j <= m-i; j++)
    {
    	if(x[j-1] >= x[j])                                            	
        {                
			t = x[j-1]; 
		    x[j-1] = x[j];  
		    x[j] = t;  
        } 
    }
  }
}
void printorder(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n / 2; i++)
    {
        printf("%d ", arr[i]); 
    }
    for (j = n - 1; j >= n / 2; j--) 
    {
        printf("%d ", arr[j]);
    }
}
int main() 
{
    int i, j, n, number[100];
    scanf("%d", &n);
    for (i = 0; i < n; ++i)
    scanf("%d", &number[i]);
    sortA(n,number);
    printorder(number,n);
    return 0;
}
