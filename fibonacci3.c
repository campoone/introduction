#include <stdio.h>

int fib (int);
int main()
{
    int number; //Create variables for calculating Fibonacci Series
    printf("How many terms would you like to see? "); //Ask the user how may terms he/she would like to see
    scanf("%d", &number); //Print the first two terms of the series
    printf("0 \n");
    fib(number);
}

int fib (int n){
    if(n < 2)
        return n;
    int n2 = fib(n-2);
    int n1 = fib(n-1);
    int sum = n1 + n2;
    printf("%d \n", sum);
    return sum;
}
