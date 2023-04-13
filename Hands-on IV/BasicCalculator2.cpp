#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//variables
int sel; //selector
float op1; //operand 1
float op2; //operand 2
float r; //result
//procedures and functions
//add
float add(float num1, float num2){
    return num1 + num2;
}
//subtract
float subtract(float num1, float num2){
    return num1 - num2;
}
//multiply
float multiply(float num1, float num2){
    return num1 * num2;
}
//divide
float divide(float num1, float num2){
    while (num2 == 0){
        scanf("%f", num2);
    }
    return num1 / num2;
}
//select sub menu
char* selectSubMenu(int menu){
    switch(menu) {
        case 1:
            return "\n  ------------- Addition -------------  \n\n";
            break;
        case 2:
            return "\n  ----------- Subtraction ------------  \n\n";
            break;
        case 3:
            return "\n  ---------- Multiplication ----------  \n\n";
            break;
        case 4:
            return "\n  ------------- Division -------------  \n\n";
            break;
        case 5:
            return "Exiting...";
            break;
        default:
            return "Incorrect selection. Please enter a correct integer number (1-5).";
            break;
    }
}
//ask for operand
void askOperand(float number){ //PREGUNTAR AL PROFE SI ESTO ME ESTÁ ROMPIENDO EL PROGRAMA
    printf("Enter a number: \n");
    scanf("%f",number);
}
//operate
float calculate(int selector){
    switch(selector) {
        case 1:
            askOperand(op1);
            askOperand(op2);
            return add(op1,op2);
            break;
        case 2:
            askOperand(op1);
            askOperand(op2);
            return subtract(op1,op2);
            break;
        case 3:
            askOperand(op1);
            askOperand(op2);
            return multiply(op1,op2);
            break;
        case 4:
            askOperand(op1);
            askOperand(op2);
            return divide(op1,op2);
            break;
        default:
            return 0;
            break;
    }
}
//calculate
void printResult(float result){
    printf("The result is: %.2f \n\n",result);
}
//print menu
void printMenu(){
    system("cls");
    printf("\n  --------- BASIC CALCULATOR ---------  \n");
    printf(" 1. Add two numbers\n");
    printf(" 2. Subtract two numbers\n");
    printf(" 3. Multiply two numbers\n");
    printf(" 4. Divide two numbers\n");
    printf(" 5. Exit\n\n");
    printf(" Select: \n\n");
}
//print sub menu
void printSubMenu(char * operation){
    system("cls");
    printf("\n  --------- BASIC CALCULATOR ---------  \n");
    printf(operation);
}

int main(){
    //menu
    do {
        printMenu();
        scanf("%d",&sel);
        //sub menus
        printSubMenu(selectSubMenu(sel));
        printResult(calculate(sel));
        system("pause");
    } while (sel != 5);

    return 0;
}
