//Save "n" elements in a dynamically allocated memory chunk.
#include <stdio.h>

int main() {
	//code
	int n, i;
	
	scanf("%d", &n);
	
	int *ptr_to_n_elements = (int *) malloc(sizeof(int) * n);
	for(i = 0; i < n; i++)
	{
	    scanf("%d", ptr_to_n_elements + i);
	}
	
	for(i = 0; i < n; i++)
	{
	    printf("%d ", *(ptr_to_n_elements + i));
	}
	
	return 0;
}
