// Consider below C program. The file taken in the example contains the following data : 
// “Someone over there is calling you. We are going for work. Take care of yourself.” (without the quotes) 
// When the fscanf statement is executed word “Someone” is stored in string and the pointer is moved beyond “Someone”. Therefore ftell(fp) returns 7 as length of “someone” is 6.

// C program to demonstrate use of ftell()							
#include<stdio.h>

int main()
{
	/* Opening file in read mode */
	FILE *fp = fopen("file1.txt","r");

	/* Reading first string */
	char string[20];
	fscanf(fp,"%s",string);

	/* Printing position of file pointer */
	printf("%ld", ftell(fp));

	fclose(fp);
	return 0;
}
