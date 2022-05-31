// program-1:C program to find sum of array elements...
#include <stdio.h>
int main()
{
    int arr[100];
    int i, n, sum=0;
    printf("Enter n of the array: ");
    scanf("%d", &n);
    printf("Enter %d elements in the array: ", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=0; i<n; i++)
    {
        sum = sum + arr[i];
    }
    printf("Sum of all elements of array = %d", sum);

    return 0;
}

// PROGRAM-2:-C program to count even and odd elements in array....
#include <stdio.h>
int main()
{
    int arr[100];
    int i, n, even, odd;
    printf("Enter n of the array: ");
    scanf("%d", &n);
    printf("Enter %d elements in array: ", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    even = 0;
    odd  = 0;
    for(i=0; i<n; i++)
    {
        if(arr[i]%2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("Total even elements: %d\n", even);
    printf("Total odd elements: %d", odd);
    return 0;
}

// PROGRAM-3:-C program to insert an element in array....
#include <stdio.h>
int main()
{
    int arr[100];
    int i, n, num, pos;
    printf("Enter n of the array : ");
    scanf("%d", &n);
    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter element to insert : ");
    scanf("%d", &num);
    printf("Enter the element position : ");
    scanf("%d", &pos);
    if(pos > n+1 || pos <= 0)
    {
        printf("Invalid position! Please enter position between 1 to %d", n);
    }
    else
    {
        for(i=n; i>=pos; i--)
        {
            arr[i] = arr[i-1];
        }
        arr[pos-1] = num;
        n++; 
        printf("Array elements after insertion : ");
        for(i=0; i<n; i++)
        {
            printf("%d\t", arr[i]);
        }
    }

    return 0;
}

// PROGRAM-4:-C program count total duplicate elements in array..
#include <stdio.h>
int main()
{
    int arr[100];
    int i, j, n, count = 0;
    printf("Enter n of the array : ");
    scanf("%d", &n);
    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
                break;
            }
        }
    }
    printf("\nTotal number of duplicate elements found in array = %d", count);

    return 0;
}

// PROGRAM-5:-C program to print all unique elements in array...
#include <stdio.h>
int main()
{
    int arr[100], freq[100];
    int size, i, j, count;
    printf("Enter size of array: ");
    scanf("%d", &size);
    printf("Enter elements in array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
        freq[i] = -1;
    }
    for(i=0; i<size; i++)
    {
        count = 1;
        for(j=i+1; j<size; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
                freq[j] = 0;
            }
        }
 
        if(freq[i] != 0)
        {
            freq[i] = count;
        }
    }
    printf("\nUnique elements in the array are: ");
    for(i=0; i<size; i++)
    {
        if(freq[i] == 1)
        {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
