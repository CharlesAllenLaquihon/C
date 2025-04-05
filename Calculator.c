#include <stdio.h>

int main()

{
    printf("Calculator");

    int loop;
    loop = 0;
    
    while (loop == 0) {
    int asmd;
    int num1;
    int num2;
    
    printf("\n\n");
    printf("[1] Addition\n");
    printf("[2] Substraction\n");
    printf("[3] Multiplication\n");
    printf("[4] Division\n");
    printf("[5] Exit\n");
    printf("\nWhat operation:");
    scanf("%d", &asmd);
    
   if (asmd < 5 && asmd > 0)
    {
        printf("\nEnter 1st number:");
        scanf("%d", &num1);
        printf("Enter 2nd number:");
        scanf("%d", &num2);
    }
    switch(asmd) {
    case 1:
        printf("The answer is: %d + %d = %d", num1, num2, num1+num2);
        break;
    case 2:
        printf("The answer is: %d - %d = %d", num1, num2, num1-num2);
        break;
    case 3:
        printf("The answer is: %d * %d = %d", num1, num2, num1*num2);
        break;

    case 4:
        if (num2 > 0)
        {
            printf("The answer is: %d / %d = %d", num1, num2, num1/num2);
        }
        else
        {
            printf("invalid input!");
        }
        break;
    case 5:
        printf("Are you sure you want to exit? \n [1] = yes, [0] = no\n");
        scanf("%d", &loop);
        break;
    default: 
        printf("invalid input!");
        break;
    }
    }

    return 0;
}