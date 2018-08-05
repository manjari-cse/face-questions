#include <stdio.h>
#define SIZE 10
int selected[SIZE];

void printCombinationsWrapper(int a[], int n,int slected[],int visit_count);



int main() {
    int a[SIZE], n, i,visit_count=0;

    // size of the array 
    scanf("%d", &n);

    //Input the array ealements
    for(i=0; i<n; i++)
    {
      scanf("%d", &a[i]);
    }
    
    //Function call to search in the sorted rotated array
    printCombinationsWrapper(a, n,selected,visit_count);
    return 0;
}

void printCombinationsWrapper(int a[], int n,int slected[],int visit_count)
{
  if(visit_count==n)
  {
      int i;
      for(i=0;i<n;i++)
      {
          if(selected[i]==1)
          {
              printf("%d,",a[i]);
          }
      }
      printf("\n");
      return;
  }
  selected[visit_count]=1;
  printCombinationsWrapper(a,n,slected,visit_count+1);
  selected[visit_count]=0;
  printCombinationsWrapper(a,n,slected,visit_count+1);
  
}
