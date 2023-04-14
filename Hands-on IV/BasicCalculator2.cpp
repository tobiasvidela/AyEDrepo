#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

//Variables
int sel; //selector
float op1; //operand 1
float op2; //operand 2
float result = 0; //result
bool repeat = true; //repeating a task
//Procedures
void printTitle(){ //Print Title
    system("cls");
    printf("\n ------------- CALCULATOR v2.0 -------------\n");
}
void printMenu(){ //Print Main Menu
    printTitle();
    printf(" - 0. Exit                                 -\n");
    printf(" - 1. Add two numbers                      -\n");
    printf(" - 2. Subtract two numbers                 -\n");
    printf(" - 3. Multiply two numbers                 -\n");
    printf(" - 4. Divide two numbers                   -\n");
    printf(" -------------------------------------------\n");
    printf("\n Select: ");
}
void printSubMenu(char * selected){ //Print Sub Menu
    printTitle();
    printf(selected);
}
void askOperand(float &op){
    printf(" Enter a number: ");
    scanf("%f",&op);
    printf("\n");
}
void askToRepeat(){
    printf("\n Type 1 to continue operating. \n");
    printf("\n Type 0 to exit this sub menu. \n");
    printf("\n Repeat? (1-0) = ");
    scanf("%d",&repeat);
}
//Functions
char * selectSubMenu(int sel){ //Select Sub Menu
    switch(sel){
        case 0:
            return "\n\n";
            break;
        case 1:
            return " ----------------- Addition ----------------\n";
            break;
        case 2:
            return " --------------- Subtraction ---------------\n";
            break;
        case 3:
            return " -------------- Multiplication -------------\n";
            break;
        case 4:
            return " ----------------- Division ----------------\n";
            break;
        default:
            return "\n\n Error when selecting Sub Menu.\n\n";
            break;
    }
}
float calculate(int sel,float op1,float op2){
    switch(sel){
        case 1:
            return op1 + op2;
            break;
        case 2:
            return op1 - op2;
            break;
        case 3:
            return op1 * op2;
            break;
        case 4:
            while (op2 == 0) {
                askOperand(op2);
            }
            return op1 / op2;
            break;
    }
}
//Calculator - Main Program
int main(){

    //Menu
    do {
        printMenu();
        scanf("%d", &sel);
        repeat = true;
        while (repeat && (sel > 0) && (sel < 5)){ //sub menu
            printSubMenu(selectSubMenu(sel));
            askOperand(op1);
            askOperand(op2);
            result = calculate(sel,op1,op2);
            printf("\n Result = %.2f \n",result);
            askToRepeat();
        }
    } while (sel != 0);

    printf("\n Exiting... \n\n");

    return 0;
}
