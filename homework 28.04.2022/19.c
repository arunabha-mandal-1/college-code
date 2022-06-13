#include <stdio.h>
#include <stdbool.h>

bool isPrime(int number)
{
    if (number < 2)
    {
        return false;
    }
    int c = 2;
    while (number > c)
    {
        if (number % c == 0)
        {
            return false;
        }
        c++;
    }
    return true;
}

bool isOdd(int number)
{
    return (number % 2 != 0);
}

bool isEven(int number)
{
    return (number % 2 == 0);
}

bool isArmstrong(int number)
{
    int sum = 0;
    int temp = number;
    while (temp > 0)
    {
        int rem = temp % 10;
        sum += (rem * rem * rem);
        temp /= 10;
    }
    if (sum == number)
    {
        return true;
    }
    return false;
}

void positiveNegativeZero(int number)
{
    if (number == 0)
    {
        printf("Zero.\n");
        return;
    }
    if (number > 0)
    {
        printf("Positive.\n");
        return;
    }
    if (number < 0)
    {
        printf("Negative.\n");
        return;
    }
}

int main()
{
    while (1)
    {
        int choice;
        level:
        printf("\n1. Prime Number.\n");
        printf("2. Even/Odd Number.\n");
        printf("3. Armstrong Number.\n");
        printf("4. Positive/Negative/Zero.\n");
        printf("5. Quit.\n");

        printf("Enter your choice : ");
        scanf("%d", &choice);

        if(choice==5)return 0;

        if (choice > 5 || choice < 1)
        {
            printf("Wrong choice.\n");
            goto level;
            // return -1;
        }

        int number;
        printf("\nEnter the number you want to check for : ");
        scanf("%d", &number);

        // if(choice==5) return 0;

        if (choice == 1)
        {
            if (isPrime(number))
            {
                printf("Prime Number.\n");
                // return 0;
            }
            else
            {
                printf("Not a prime number.\n");
                // return 0;
            }
        }
        else if (choice == 2)
        {
            if (isEven(number))
            {
                printf("Even number.\n");
                // return 0;
            }
            if (isOdd(number))
            {
                printf("Odd number.\n");
                // return 0;
            }
        }
        else if (choice == 3)
        {
            if (isArmstrong(number))
            {
                printf("Armstrong number.\n");
                // return 0;
            }
            else
            {
                printf("Not a armstrong number.\n");
                // return 0;
            }
        }
        else if (choice == 4)
        {
            positiveNegativeZero(number);
        }
    }
}