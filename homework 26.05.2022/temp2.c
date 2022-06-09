#include <stdio.h>
#include <ctype.h>

int main()
{
int arr[] = {1, 2, 3, 4, 5, 6};
int count = 0;
for(int i=0; i<6; i++)
{
    switch(arr[i])
    {
        case 2:
            count++;
            break;
        default:
            break;
    }
}

char name[10] = "Arunabha";
char ch = toupper(name[3]);
printf("%c %d\n", ch, ch);
puts(name);

}