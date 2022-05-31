// PROGRAM:-1-C program to swap two numbers using bitwise operator...

#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter any two numbers: ");
    scanf("%d%d", &a, &b);

    printf("Original value of a= %d\n", a);
    printf("Original value of b = %d\n", b);
    a^= b;
    b ^= a;
    a^= b;

    printf("aafter swapping = %d\n", a);
    printf("b after swapping = %d\n", b);

    return 0;
}

// PROGRAM-2:-C program to check even or odd using bitwise operator.....

#include <stdio.h>
int main()
{
    int num;
    printf("Enter any number: ");
    scanf("%d", &num);
    if(num & 1)
    {
        printf("%d is odd.", num);
    }
    else
    {
        printf("%d is even.", num);
    }
    return 0;
}

