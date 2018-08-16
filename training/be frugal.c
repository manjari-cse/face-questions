#include <stdio.h>

#define ARRAY_SIZE 10

unsigned int findElements(int arr[], int e1, int e2);

int main() 
{
  int arr[ARRAY_SIZE];
  int number_of_elem, e1, e2, i;
  unsigned int results;
  
  // Get the array 
  for(i=0; i<ARRAY_SIZE; i++) {
    scanf("%d", &arr[i]);    
  }
  
  // Get element to find - e1
  scanf("%d", &e1);
  
  // Get element to find - e2
  scanf("%d", &e2);
  
  results = findElements(arr, e1, e2);
  
  unsigned int e1Index = results & 0x0f;
  if(e1Index == 0x0f) {
      printf("e1 not found\n");
  } else {
      printf("e1 index - %d\n", e1Index);
  }
  
  unsigned int e2Index = (results & 0xf0) >> 4;
  if(e2Index == 0x0f) {
      printf("e2 not found\n");
  } else {
      printf("e2 index - %d\n", e2Index);
  }
  
  return 0;
}

unsigned int findElements(int arr[], int e1, int e2) {
    int i, e1Found = 0, e2Found = 0; 
    unsigned int results = 0;
    
    for(i=0; i<ARRAY_SIZE; i++) {
        if(arr[i] == e1) {
            e1Found = 1;
            results = results | i;
        }
        
        if(arr[i] == e2) {
            e2Found = 1;
            results = results | (i << 4);
        }
    }
    
    if(e1Found == 0) {
        results = results | 0x0f;
    }
    
    if(e2Found == 0) {
        results = results | 0xf0;
    }
    
    return results;
}
