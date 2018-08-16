#include <stdio.h>

int power(int x, int n);

int main() {
	int x,n;
    //Get the value of x and n
	scanf("%d%d",&x,&n);
    //Call power() function which will return x^n
	int val = power(x,n);
	printf("%d",val);
	
	return 0;
}

int power(int x, int n) {
    if(n==1) 
        return x;
    //if x is even
    if(n%2 == 0) {
        return power(x*x, n/2);
    }
    //if x is odd
    return x * power(x*x, n/2);
}
