#include <stdio.h>

int main (){

    int choice;
    float num1 , num2 , result;

    while (1){
     
     printf("Simple Calculator Menu:\n");
     printf("1. Addition\n");
     printf("2. Subtraction\n");
     printf("3. Multiplication\n");
     printf("4. Division\n");
     printf("5. Exit\n");
     printf("Enter your choice (1-5): ");
     scanf("%d", &choice);

    if (choice == 5 )
    {
     printf("Exit: GoodBye!");
     break;
    }

    if (choice < 1 || choice > 5)
    {
     printf("Error: Re-Enter Choice");
     continue;
    }
    
    printf("Enter First Number: ");
    scanf("%f", &num1);
    printf("Enter Second Number: ");
    scanf("%f", &num2);

    if (choice == 4 && num2 == 0) 
    {
     printf("Error: Division by zero\n");
     continue;
    }

    switch (choice){
     case 1: result = num1 + num2; printf("Result: %.2f + %.2f = %.2f\n", num1,num2,result); break;
     case 2: result = num1 - num2; printf("Result: %.2f - %.2f = %.2f\n", num1,num2,result); break;
     case 3: result = num1 * num2; printf("Result: %.2f * %.2f = %.2f\n", num1,num2,result); break;
     case 4: result = num1 / num2; printf("Result: %.2f / %.2f = %.2f\n", num1,num2,result); break;
    }
     
    }
    return 0;
}