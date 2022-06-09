#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

// 1 extract a part of a string -
void extract(char* str, int start, int end);
// 2 find the occurrence of a word in a string -
void occurrence(char* str, char* word);
// 3 reverse the string except it's punctuation marks -
void reverseWithoutPunc(char* str);
// 4 delete vowels from string -
void deleteVowels(char* str);
// 5 search number and its position -
void searchNumeric(char* str);
int main()
{
while(1)
{
    int choice;
    printf("\n\n1. Extract a part of a string.\n");
    printf("2. Find occurrence of a particular word in a string.\n");
    printf("3. Reverse a string wthout punctuation marks.\n");
    printf("4. Delete vowels from a string.\n");
    printf("5. Search all the numbers and its position in a string.\n");
    printf("Any other key to quit.\n\n");

    printf("Enter Your choice : ");
    scanf("%d", &choice);
    if(choice<1 || choice>5)return 0;
    getchar();

    printf("Character limit 150.**\n");
    char str[151];
    printf("Enter the string : ");
    scanf("%[^\n]", str);
    getchar();


    if(choice==1)
    {
    int start, end;
    printf("0 based index**\n");
    printf("Enter start index : ");
    scanf("%d", &start);
    getchar();
    printf("Enter end index : ");
    scanf("%d", &end);
    getchar();
    extract(str, start, end);
    }
    else if(choice==2)
    {
    printf("Character limit 15**\n");
    char word[15];
    printf("Enter the word : ");
    scanf("%[^\n]", word);
    getchar();
    // gets(word);
    occurrence(str, word);
    }
    else if(choice==3)
    {
    reverseWithoutPunc(str);
    }
    else if(choice==4)
    {
    deleteVowels(str);
    }
    else if(choice==5)
    {
    searchNumeric(str);
    }
    // else
    // {
    // return 0;
    // }
}
}

// 1 extract a part of a string
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

// 2 find the occurrence of a word in a string
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

// bool isAlphabet(char ch){return ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'));}
// 3 reverse the string except it's punctuation marks
void reverseWithoutPunc(char* str)
{
int strLen = strlen(str);
int end = strLen-1, start=0;
while(start<end)
{
    if(!isalpha(str[start])) start++;
    else if(!isalpha(str[end])) end--;
    else
    {
    char temp=str[start];
    str[start]=str[end];
    str[end]=temp;
    start++;
    end--;
    }
}
printf("The reversed string without punctuation marks is - %s\n", str);
return;
}
// 4 delete vowels from string
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

// 5 search number and its position
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