#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(int);
bool isPrime(int);

int main()
{
int n;
printf("How many prime-palindrome number do you want : ");
scanf("%d", &n);
int count = 0;
int numbers = 0;
while(count<n)
{
    if(isPalindrome(numbers) && isPrime(numbers))
    {
        count++;
        printf("%3d\t", numbers);
        if(count>0 && count%5==0)printf("\n");
    }
    numbers++;
}
// bool a = isPalindrome(n);
// printf("%d\n", a);
return 0;
}

bool isPalindrome(int n)
{
int temp = n;
int reversed = 0;
while(temp>0)
{
    int rem = temp % 10;
    reversed = reversed*10 + rem;
    temp /= 10;
}
if(n==reversed) return true;
return false;
}

bool isPrime(int n)
{
int c = 2;
if(n<2)
{
// printf("Neither prime nor composite.\n");
return false;
}
while(c<n)
{
if(n%c==0)return false;
c++;
}
return true;
}