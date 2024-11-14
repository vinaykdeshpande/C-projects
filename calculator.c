#include<stdio.h>

/*
 * Simple Calculator Program
 * Author: Vinay kumar K Deshpande
 * Description: This program is a simple calculator that performs basic arithmetic operations,
 * including addition, multiplication, subtraction, division, and finding the factorial of a number.
 * The user interacts with the program via a menu-driven interface.
 * License: MIT License
 */

int main()
{
    while(1)
    {
        // Display the menu and prompt user for an operation
        int choice;
        printf("Welcome to the Calculator!\n");
        printf("Select the operation you wish to perform:\n");
        printf("1. Addition\n");
        printf("2. Multiplication\n");
        printf("3. Subtraction\n");
        printf("4. Division\n");
        printf("5. Factorial of a number\n");
        printf("Press 0 to exit the calculator\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 0:
                // Exit the calculator
                printf("Thank you for using the calculator. Goodbye!\n");
                return 0;
            
            case 1:
            {
                // Addition operation
                printf("You have selected Addition.\nPlease enter two numbers.\n");
                int num1, num2, result;
                printf("Enter the first number: ");
                scanf("%d", &num1);
                printf("Enter the second number: ");
                scanf("%d", &num2);
                result = num1 + num2;
                printf("The sum of %d and %d is: %d\n", num1, num2, result);
                break;
            }

            case 2:
            {
                // Multiplication operation
                printf("You have selected Multiplication.\nPlease enter two numbers.\n");
                int num1, num2, result;
                printf("Enter the first number: ");
                scanf("%d", &num1);
                printf("Enter the second number: ");
                scanf("%d", &num2);
                result = num1 * num2;
                printf("The product of %d and %d is: %d\n", num1, num2, result);
                break;
            }

            case 3:
            {
                // Subtraction operation
                printf("You have selected Subtraction.\nPlease enter two numbers.\n");
                int num1, num2, result;
                printf("Enter the first number: ");
                scanf("%d", &num1);
                printf("Enter the second number: ");
                scanf("%d", &num2);
                result = num1 - num2;
                printf("The result of %d minus %d is: %d\n", num1, num2, result);
                break;
            }

            case 4:
            {
                // Division operation
                printf("You have selected Division.\nPlease enter two numbers.\n");
                int num1, num2;
                float result;
                printf("Enter the numerator: ");
                scanf("%d", &num1);
                printf("Enter the denominator: ");
                scanf("%d", &num2);
                if (num2 == 0)
                {
                    // Handle division by zero error
                    printf("Error: Division by zero is not allowed.\n");
                }
                else
                {
                    result = (float)num1 / num2;
                    printf("The result of %d divided by %d is: %.2f\n", num1, num2, result);
                }
                break;
            }

            case 5:
            {
                // Factorial operation
                printf("You have selected Factorial.\nPlease enter a number.\n");
                int num, factorial = 1;
                printf("Enter a number: ");
                scanf("%d", &num);
                if (num < 0)
                {
                    // Factorial is undefined for negative numbers
                    printf("Factorial of a negative number is undefined.\n");
                }
                else
                {
                    for(int i = 1; i <= num; i++)
                    {
                        factorial *= i;
                    }
                    printf("The factorial of %d is: %d\n", num, factorial);
                }
                break;
            }

            default:
                // Handle invalid input
                printf("Invalid choice. Please select a valid option from the menu.\n");
                break;
        }
    }
    return 0;
}
