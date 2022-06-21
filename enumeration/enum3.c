// Two enum names can have same value.
#include <stdio.h>
enum State {Working = 1, Failed = 0, Freezed = 0};
 
int main()
{
   printf("%d, %d, %d", Working, Failed, Freezed);
//    for(int i=Working; i<Failed; i++) printf("%d "); // won't work
   printf("\n");
   return 0;
}