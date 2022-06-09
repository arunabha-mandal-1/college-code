// arrange names of 5 cities

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// selection sort
void sorting(char str[][20], int size)
{
    char* tempCity1 = (char*)calloc(20, sizeof(char));
    char* tempCity2 = (char*)calloc(20, sizeof(char));
    char* tempCity3 = (char*)calloc(20, sizeof(char));
    for(int i = 0; i < size; i++)
    {
        tempCity1 = str[i];
        int temp = i;
        for(int j = i + 1; j < size; j++)
        {
            tempCity2 = str[j];
            if(strcmp(tempCity1, tempCity2) > 0)
            {
                temp = j;
                strcpy(tempCity3, str[i]);
                strcpy(str[i], str[temp]);
                strcpy(str[j], tempCity3);
            }
        }
    }
    free(tempCity1);
    free(tempCity2);
    free(tempCity3);

    return;
}

void printArray(char str[][20], int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("%s", str[i]);
        printf("\n");
    }

    return;
}
int main(void)
{
    char cities[5][20];
    
    char city1[20];
    char city2[20];
    char city3[20];
    char city4[20];
    char city5[20];

    printf("Enter first city name : ");
    gets(city1);
    printf("Enter first city name : ");
    gets(city2);
    printf("Enter first city name : ");
    gets(city3);
    printf("Enter first city name : ");
    gets(city4);
    printf("Enter first city name : ");
    gets(city5);

    city1[0] = toupper(city1[0]);
    city2[0] = toupper(city2[0]);
    city3[0] = toupper(city3[0]);
    city4[0] = toupper(city4[0]);
    city5[0] = toupper(city5[0]);

    strcpy(cities[0], city1);
    strcpy(cities[1], city2);
    strcpy(cities[2], city3);
    strcpy(cities[3], city4);
    strcpy(cities[4], city5);

    sorting(cities, 5);
    printArray(cities, 5);

    return 0;
}