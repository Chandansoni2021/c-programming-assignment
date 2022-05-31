// PROGRAM-1:-C program to create calculator using switch case and functions

#include <stdio.h>

int main()
{
    char op;
    float num1, num2, result=0.0f;

    /* Print welcome message */
    printf("WELCOME TO SIMPLE CALCULATOR\n");
    printf("----------------------------\n");
    printf("Enter [number 1] [+ - * /] [number 2]\n");
    scanf("%f %c %f", &num1, &op, &num2);
    switch(op)
    {
        case '+': 
            result = num1 + num2;
            break;

        case '-': 
            result = num1 - num2;
            break;

        case '*': 
            result = num1 * num2;
            break;

        case '/': 
            result = num1 / num2;
            break;

        default: 
            printf("Invalid operator");
    }
    printf("%f %c %f = %f", num1, op, num2, result);

    return 0;
}

//output
WELCOME TO SIMPLE CALCULATOR
----------------------------
Enter [number 1] [+ - * /] [number 2]
5+1
5.000000 + 1.000000 = 6.000000

// PROGRAM-2:-C program to find maximum between two numbers using switch case...
#include <stdio.h>
int main()
{
    int num1, num2;
    printf("Enter two numbers to find maximum: ");
    scanf("%d%d", &num1, &num2);
    switch(num1 > num2)
    {   
        case 0: 
            printf("%d is maximum", num2);
            break;
        case 1: 
            printf("%d is maximum", num1);
            break;
    }

    return 0;
}

// PROGRAM-3:-Program to check vowel or consonant using switch...case statement
#include <stdio.h>
int main()
{
    char ch;
    printf("Enter any character: ");
    scanf("%c", &ch);
    switch(ch)
    {
        case 'a': 
        case 'e': 
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U': 
        printf("Vowel");
            break;

        default:
        printf("Consonant");
    }

    return 0;
}