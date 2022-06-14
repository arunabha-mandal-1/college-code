#include <stdio.h>
#include <math.h>

int main()
{
	int choiceFirst;
	while(1)
	{
		level:
		printf("\n1. Arithmetic operator.\n");
		printf("2. Relational operator.\n");
		printf("3. Logical operator.\n");
		printf("4. Increment/decrement operator.\n");
		printf("5. Bitwise operator.\n");
		printf("6. Assignment operator/Compound assignment.\n");
		printf("7. Ternary operator.\n");
		printf("8. sizeof operator.\n");
		printf("9. QUIT.\n");
		
		printf("\nEnter a choice : ");
		scanf("%d", &choiceFirst);

		if(choiceFirst==9) return 0;
		if(choiceFirst == 1)
		{
			int choiceSecond;
			printf("01. Addition\n02. Substraction\n03. Multiplication\n04. Division\n05. Modulo\n");
			printf("Enter a choice : ");
			scanf("%d", &choiceSecond);
			
			if(choiceSecond < 1 || choiceSecond > 5)
			{
				printf("Invalid Input.\n");
				goto level;
				// return -1;
			}
			printf("Enter two numbers you want to do operation with : ");
			float num1, num2;
			scanf("%f%f", &num1, &num2);
			
			if(choiceSecond == 1)
			{
				printf("Result is %f\n", num1 + num2);	
			}
			else if(choiceSecond == 2)
			{
				printf("Result is %f\n", num1 - num2);	
			}
			else if(choiceSecond == 3)
			{
				printf("Result is %f\n", num1 * num2);	
			}
			else if(choiceSecond == 4)
			{
				printf("Result is %f\n", num1 / num2);	
			}
			else if(choiceSecond == 5)
			{
				printf("Result is(in integer) %d\n", (int)num1 % (int)num2);	
			}
		}
		else if(choiceFirst == 2)
		{
			printf("\n01. Greater than\n02. Less than\n03. Greater than or equal to\n04. Less than or equal to\n05. Not equal to\n");
			int choiceThird;
			printf("Enter choice : ");
			scanf("%d", &choiceThird);
			
			if(choiceThird < 1 || choiceThird > 5)
			{
				printf("Invalid Input\n");
				goto level;
				// return -1;
			}
			
			printf("Enter two numbers you want to check for : ");
			float num1, num2;
			scanf("%f%f", &num1, &num2);
			
			if(choiceThird == 1)
			{
				if(num1 > num2)
				{
					printf("True.\n");
				}
				else
				{
					printf("False.\n");
				}
			}
			else if(choiceThird == 2)
			{
				if(num1 < num2)
				{
					printf("True.\n");
				}
				else
				{
					printf("False.\n");
				}
			}
			else if(choiceThird == 3)
			{
				if(num1 >= num2)
				{
					printf("True.\n");
				}
				else
				{
					printf("False.\n");
				}
			}
			else if(choiceThird == 4)
			{
				if(num1 <= num2)
				{
					printf("True.\n");
				}
				else
				{
					printf("False.\n");
				}
			}
			else if(choiceThird == 5)
			{
				if(num1 != num2)
				{
					printf("True.\n");
				}
				else
				{
					printf("False.\n");
				}
			}
		}
		else if(choiceFirst == 3)
		{
			printf("\n01. &&\n02. ||\n03. !\n");
			int choiceForth;
			printf("Enter your choice : ");
			scanf("%d", &choiceForth);
			
			if(choiceForth < 1 || choiceForth > 3)
			{
				printf("Invalid Choice.\n");
				goto level;
				// return -1;
			}
			
			printf("Enter two numbers you want to check for : ");
			float num1, num2;
			scanf("%f%f", &num1, &num2);
			
			if(choiceForth == 1)
			{
				if(num1 > 0 && num2 > 0)
				{
					printf("Both are positive.\n");
				}
				else
				{
					printf("Both are not positive.");
				}
			}
			else if(choiceForth == 2)
			{
				if(num1 > 0 || num2 > 0)
				{
					printf("Either One is positive.\n");
				}
				else
				{
					printf("Both are negative.\n");
				}
			}
			else if(choiceForth == 3)
			{
				if(!num1)
				{
					printf("First number is zero.\n");
				}
				else
				{
					printf("First number is not zero.\n");
				}
				
				if(!num2)
				{
					printf("Second number is zero.\n");
				}
				else
				{
					printf("Second number is not zero.\n");
				}
			}
		}
		else if(choiceFirst == 4)
		{
			printf("01. Increment\n02. Decrement\n");
			int choiceFifth;
			printf("Enter your choice : ");
			scanf("%d", &choiceFifth);
			
			if(choiceFifth < 1 || choiceFifth > 2)
			{
				printf("Invalid Input.\n");
				goto level;
				// return -1;
			}
			
			if(choiceFifth == 1)
			{
				printf("Enter a number you want to increment : ");
				int num;
				scanf("%d", &num);
				num++;
				printf("Incremented Number is %d.\n", num);
			}
			else if(choiceFifth == 2)
			{
				printf("Enter a number you want to decrement : ");
				int num;
				scanf("%d", &num);
				num--;
				printf("Decremented Number is %d.\n", num);
			}
		}
		else if(choiceFirst == 5)
		{
			printf("\n01. &\n02. |\n03. ~\n04. ^\n");
			int choiceSixth;
			printf("Enter your choice : ");
			scanf("%d", &choiceSixth);
			
			if(choiceSixth < 1 || choiceSixth > 4)
			{
				printf("Invalid input.\n");
				goto level;
				// return -1;
			}
			
			printf("Enter two number you want to do operation with : ");
			int num1,num2;
			scanf("%d%d", &num1, &num2);
			
			if(choiceSixth == 1) printf("%d & %d = %d\n", num1, num2, (num1&num2));
			else if(choiceSixth == 2) printf("%d | %d = %d\n", num1, num2, (num1|num2));
			else if(choiceSixth == 3) printf("~%d = %d, ~%d = %d", num1, (~num1), num2, (~num2));
			else if(choiceSixth == 4) printf("%d ^ %d = %d\n", num1, num2, (num1^num2));
			
		}
		else if(choiceFirst == 6)
		{
			printf("\n01. Assignment\n02. Compound assignment\n");
			printf("Enter your choice : ");
			int choiceSeventh;
			scanf("%d", &choiceSeventh);
			
			if(choiceSeventh < 1 || choiceSeventh > 2)
			{
				printf("Invalid input.\n");
				goto level;
				// return -1;
			}
			
			if(choiceSeventh == 1)
			{
				int num;
				printf("Enter a value you want to aggign to a : ");
				scanf("%d", &num);
				
				int a;
				a = num;
				printf("a = %d\n", num);
			}
			else if(choiceSeventh == 2)
			{
				int num;
				printf("Enter a value you want to add to a : ");
				scanf("%d", &num);
				
				int a = 20;
				printf("a = %d\n", a);
				a += num;
				printf("Now a = %d\n", num);
			}
		}
		else if(choiceFirst == 7)
		{
			printf("Max among three numbers.\n");
			printf("Enter three numbers you want to check for : ");
			
			float num1, num2, num3;
			scanf("%f%f%f", &num1, &num2, &num3);
			
			float max = (num1 > num2) ? (num1 > num3 ? num1 : num3) : (num2 > num3 ? num2 : num3);
			printf("Max number is %0.2f\n", max);
		}
		else if(choiceFirst == 8)
		{
			printf("\n\nSize of an integer is %d byte.\n", sizeof(int));
			printf("Size of an float is %d byte.\n", sizeof(float));
			printf("Size of an char is %d byte.\n", sizeof(char));
			printf("Size of an double is %d byte.\n", sizeof(double));
			// return 0;
			// goto level;
		}else return 0;
	}
	
	// return 0;	
}
