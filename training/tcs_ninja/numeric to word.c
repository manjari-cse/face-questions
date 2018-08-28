#include <stdio.h>

char* ones[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
char* two_digit_tens[] = {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
char* two_digit_special[] = {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};

void print_ones(int n)
{
    printf("%s ", ones[n]);
}

void print_double_digit(int n)
{
    if(n >= 10 && n <= 19)
    {
        printf("%s ", two_digit_special[n - 10]);
    }
    else 
    {
        if(n/10 != 0)
        {
            printf("%s ", two_digit_tens[(n/10)]);
        }
        
        if(n%10 != 0)
        {
            print_ones(n%10);
        }
    }
}

void print_triple_digit(int n)
{
    if(n/100 != 0)
    {
        print_ones(n/100);
        printf("hundred ");
    }
    
    if(n%100 != 0)
    {
        print_double_digit(n%100);
    }
}

void print_four_digit(int n)
{
    if(n/1000 != 0)
    {
        print_ones(n/1000);
        printf("thousand ");
    }
    
    if(n%1000 != 0)
    {
        print_triple_digit(n%1000);
    }
}

int main()
{
    int n;
    scanf("%d", &n );
    
    if(n < 10)
    {
        print_ones(n);
    }
    else if(n < 100)
    {
        print_double_digit(n);
    }
    else if(n < 1000)
    {
        print_triple_digit(n);
    }
    else // n < 9999
    {
        print_four_digit(n);
    }
    
    return 0;
}
