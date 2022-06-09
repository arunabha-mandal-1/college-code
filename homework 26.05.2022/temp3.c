#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
char name[20] = "Arunabha";
char title[20] = "Mandal";
strcat(name, title);
printf("%s\n", name);
// printf(",%c, %d\n", strstr(name, title));
char *temp = strstr(name, title);
printf("%i\n", temp);
// printf("%d\n", temp-name); // unexpected result

if(temp) printf("Hi...\n");
else printf("Nooooo...\n");
}