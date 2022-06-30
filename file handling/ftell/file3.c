// C program to implement
// the above approach
#include <stdio.h>
// #include <stdlib.h>
#include <string.h>

// Driver code
int main()
{
	FILE* ptr;
	char ch;

	// Opening file in reading mode
	ptr = fopen("file3.txt", "r");

	if (NULL == ptr) {
		printf("file can't be opened \n");
	}

    fseek(ptr, 5, SEEK_SET); // checking whether it counts space
	printf("content of this file are \n");

	// Printing what is written in file
	// character by character using loop.
	do {
		ch = fgetc(ptr);
		printf("%c", ch);

		// Checking if character is not EOF.
		// If it is EOF stop eading.
	} while (ch != EOF);


    // don't know why while loop is not working

	// Closing the file
	fclose(ptr);
	return 0;
}
