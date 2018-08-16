#include <stdio.h>
#include <stdlib.h>

void print_array(int arr[], int n)
{
	int i;
	for(i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	
	printf("\n");
}

void compute_product(int a[], int product[], int n)
{
  int *left = (int *)malloc(sizeof(int)*n);
  int *right = (int *)malloc(sizeof(int)*n);
 
  int i, j;
 
  left[0] = 1;
 
  right[n-1] = 1;
 
  for(i = 1; i < n; i++)
  {
    left[i] = a[i-1]*left[i-1];
  }
 
  for(j = n-2; j >=0; j--)
  {
    right[j] = a[j+1] * right[j+1];
  }
 
  for (i=0; i<n; i++)
  {
    product[i] = left[i] * right[i];
  }
 
  return;
}

int main() {
	int a[100], product[100];
	int i, n;
	
	scanf("%d", &n);
	for(i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	
	compute_product(a, product, n);
	
	print_array(product, n);
	return 0;
}
