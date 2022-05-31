// PROGRAM-1:-C program to check Leap Year


#include <stdio.h>
int main()
{
    int year;
    printf("please Enter a year : ");
    scanf("%d", &year);
    if(((year % 4 == 0) && (year % 100 !=0)) || (year % 400==0))
    {
        printf("leap year");
    }
    else
    {
        printf(" not a leap year");
    }

    return 0;
}

// PROGRAM-2:-C program to check whether a character is alphabet, digit or special character..

#include <stdio.h>
int main()
{
    char ch;
    printf("Enter A  character: ");
    scanf("%c", &ch);
    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        printf("'%c' is alphabet.", ch);
    }
    else if(ch >= '0' && ch <= '9')
    {
        printf("'%c' is digit.", ch);
    }
    else 
    {
        printf("'%c' is special character.", ch);
    }
    return 0;
}

// PROGRAM-3:-C program check whether a number is even or odd'...

#include <stdio.h>
int main()
{
    int num;
    printf("Enter any number to check even or odd: ");
    scanf("%d", &num);
    if(num % 2 == 0)
    {
        printf("Number is Even.");
    }
    else
    {
        printf("Number is Odd.");
    }

    return 0;
}

// PROGRAM-4:-C program to enter week number and print day of week...
#include <stdio.h>
int main()
{
    int week;
    printf("Enter week number (1-7): ");
    scanf("%d", &week);
    if(week == 1)
    {
        printf("Monday");
    }
    else if(week == 2)
    {
        printf("Tuesday");
    }
    else if(week == 3)
    {
        printf("Wednesday");
    }
    else if(week == 4)
    {
        printf("Thursday");
    }
    else if(week == 5)
    {
        printf("Friday");
    }
    else if(week == 6)
    {
        printf("Saturday");
    }
    else if(week == 7)
    {
        printf("Sunday");
    }
    else
    {
        printf("Invalid Input! Please enter week number between 1-7.");
    }

    return 0;
}

// PROGRAM-5:-C program to check whether a number is positive, negative or zero....

#include <stdio.h>
int main()
{
    int num;
    printf("Enter any number: ");
    scanf("%d", &num);
    if(num > 0)
    {
        printf("Number is POSITIVE");
    }
    if(num < 0)
    {
        printf("Number is NEGATIVE");
    }
    if(num == 0)
    {
        printf("Number is ZERO");
    }

    return 0;
}
