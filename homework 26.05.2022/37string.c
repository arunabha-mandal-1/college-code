#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

// 1
void extract(char* str, int start, int end)
{
int strLen = strlen(str);
int extractLen = end-start+2;
char extractPart[extractLen];
int j = 0;
if(start > end) {printf("Please enter correct start and end value.\n"); return;}
if(start < 0) {printf("Please enter start index greater than equal to 0.\n"); return;}
if(end > strLen) {printf("Please enter end value less than %d.\n", extractLen); return;}
for(int i=start; i<=end; i++)
    extractPart[j++] = str[i];
extractPart[j] = '\0';
printf("The extracted string is - \"%s\".\n", extractPart);
return;
}

// 2
void occurrence(char* str, char* word)
{
int count = 0, strLen = strlen(str), wordLen = strlen(word);
for(int i=0; i<strLen;)
{
    int j = 0;
    if(str[i] == word[j])
    {
    for(j; j<wordLen; j++)
        {
        if(str[i] != word[j])
        {
        goto out;
        }
        i++;
        }
        count++;
    }
    out:
    i++;
}
printf("There are %d \"%s\"\n", count, word);
}

// 3
void deleteVowels(char* str)
{
int strLen = strlen(str);
int count = 0, j = 0;
char* dltVwlStr = (char*)malloc((count+1)*sizeof(char));
if(dltVwlStr==NULL){printf("Memory not allocated.\n"); return;}
for(int i=0; i<strLen; i++)
{
    char temp = toupper(str[i]);
    switch(temp)
    {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            break;
        default: 
            count++;
            dltVwlStr = (char*)realloc(dltVwlStr, count);
            dltVwlStr[j++] = str[i];
            break;
    }
}
dltVwlStr[j] = '\0';
printf("\"%s\" without vowel(s) is - \"%s\"\n", str, dltVwlStr);
return;
}

// 4
void searchNumeric(char* str)
{
int strLen = strlen(str);
printf("%d based index.**\n", 0);
for(int i=0; i<strLen; i++)
{
    if(str[i]>=48 && str[i]<=57)
    {
    printf("Numeric digit \"%c\", position - \"%d\"\n", str[i], i);
    }
}
return;
}
int main()
{
char name[10] = "Arunabha";
extract(name, 2, 5);


char str[100] = "He is also a good boy. He boy loves to play football.";
occurrence(str, "fuck");
deleteVowels(name);


char nu[50] = "I 12jk lkljdkasdja5llkclk.";
searchNumeric(nu);
}