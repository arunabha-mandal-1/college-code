#include <stdio.h>
#include <math.h>

int main()
{
    /*
        1. binary to decimal
        2. decimal to binary
        3. exit
    */

   while(1)
   {
       printf("\n\n1. Binary to Decimal\n2. Decimal to Binary\n3. Exit\n");
       int choice;
       printf("Enter your choice : ");
       scanf("%d", &choice);

    // binary to decimal
       if(choice == 1)
       {
           int binary, decimal = 0, power = 0;
           printf("Enter binary number : ");
           scanf("%d", &binary);
           while(binary > 0)
           {
               int rem = binary % 10;
               if(rem != 0 || rem != 1)
               {
                   printf("Error! Please enter binary number!\n");
                   break;
               }
               decimal += rem * pow(2, power);
               power++;
               binary /= 10;
           }
           printf("Decimal number is = %d\n", decimal);
       }
    // decimal to biary
       else if(choice == 2)
       {
           int decimal, binary = 0, power = 0;
           printf("Enter decimal number : ");
           scanf("%d", &decimal);
           while(decimal > 0)
           {
               int rem = decimal % 2;
               binary += rem * pow(10, power);
               power++;
               decimal /= 2;
           }
           printf("Binary number is : %d\n", binary);
       }
    // exit
       else if(choice == 3)
       {
           return -1;
       }
    // wrong input
       else
       {
           printf("Enter right choice!\n");
       }
   }

}