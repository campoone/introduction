#include <stdio.h>
#include <math.h>

int main(){
    char ch;
    int a, b, result;

    // Asking for Input
    printf("Enter an Operator (+, -, *, /, !, s, p)! If you are doing ! or s, please enter the same number. \n If you are doing p, the first number is the base and the second number is the power. ");
    scanf("%c", &ch);
    printf("Enter two operands: \n");
    scanf("%d %d", &a, &b);
    int fact = 1;
    int sum = 0;
    int pow = 1;

    switch(ch){
        case '+':
            result = a + b;
            printf("Result = %d", result);
            break;
        case '-':
            result = a - b;
            printf("Result = %d", result);
            break;
        case '*':
            result = a * b;
            printf("Result = %d", result);
            break;
        case '/':
            result = a / b;
            printf("Result = %d", result);
            break;
        case '!':
            while (a>0)
            {
                fact = fact * a;
                a--;
            }
            printf("Factorial is %d\n",fact);
            break;
        case 's':
            while (a>0)
            {
                sum = sum+(a%10);
                a = a/10;
            }
            printf("Result = %d\n",sum);
            break;
        case 'p':
            while (b>0)
            {
                pow = pow * a;
                b--;
            }
            printf("Result = %d",pow);
            break;
    }
    return 0;
}
