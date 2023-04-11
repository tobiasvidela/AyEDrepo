#include<stdio.h>
#include<stdlib.h>

int main(){
    //variables
    int sel; //selector
    float op1; //operand 1
    float op2; //operand 2
    float r; //result

    //menu
    do {
        system("cls");
        printf("------- BASIC CALCULATOR ------- \n\n");
        printf(" 1. Add two numbers.\n");
        printf(" 2. Subtract two numbers.\n");
        printf(" 3. Multiply two numbers.\n");
        printf(" 4. Divide two numbers.\n");
        printf(" 5. Exit.\n\n");
        printf("-------------------------------- \n\n");
        printf(" Select: ");
        scanf("%d", &sel);
        switch(sel){ //sub menus
            case 1:
                system("cls");
                printf("------- BASIC CALCULATOR ------- \n");
                printf("----------- Addition ----------- \n\n");
                printf(" Enter the first value: ");
                scanf("%f", &op1);
                printf("\n Enter the last value: ");
                scanf("%f", &op2);
                r = op1 + op2;
                printf("\n The result is: %.2f \n\n", r);
                printf("-------------------------------- \n\n\n");
                system("pause");
                break;
            case 2:
                system("cls");
                printf("------- BASIC CALCULATOR ------- \n");
                printf("---------- Subtraction --------- \n\n");
                printf(" Enter the first value: ");
                scanf("%f", &op1);
                printf("\n Enter the last value: ");
                scanf("%f", &op2);
                r = op1 - op2;
                printf("\n The result is: %.2f \n\n", r);
                printf("-------------------------------- \n\n\n");
                system("pause");
                break;
            case 3:
                system("cls");
                printf("------- BASIC CALCULATOR ------- \n");
                printf("-------- Multiplication -------- \n\n");
                printf(" Enter the first value: ");
                scanf("%f", &op1);
                printf("\n Enter the last value: ");
                scanf("%f", &op2);
                r = op1 * op2;
                printf("\n The result is: %.2f \n\n", r);
                printf("-------------------------------- \n\n\n");
                system("pause");
                break;
            case 4:
                system("cls");
                printf("------- BASIC CALCULATOR ------- \n");
                printf("----------- Division ----------- \n\n");
                printf(" Enter the first value: ");
                scanf("%f", &op1);
                do {
                    printf("\n Enter the last value (Not Zero): ");
                    scanf("%f", &op2);
                } while (op2 == 0);
                r = op1 / op2;
                printf("\n The result is: %.2f \n\n", r);
                printf("-------------------------------- \n\n\n");
                system("pause");
                break;
            case 5:
                break;
            default:
                system("cls");
                printf(" That option does not exists.\n\n");
                system("pause");
                break;
        }
    } while (sel != 5);

    printf("\n Exiting... \n");

    return 0;
}
