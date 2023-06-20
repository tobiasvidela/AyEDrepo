#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define mil 5

struct Tarea {
    char *title;
    char *description;
    int difficulty; //Easy-Medium-Hard||1-2-3
    int state; //Pending-Current-Finished-Canceled||1-2-3-4
    /*      DATES
     *  char creation[30];
     *  char expiration[30];
     *  char lastEdit[30];
    */
};

//Menus
void printMainMenu(){
    system("cls");
    printf("\t\t\t TASK MANAGER v1 \n");
    printf("\n Welcome User! What do you want to do? \n");
    printf("\n");
    printf("\t[1] See my tasks.\n");
    printf("\t[2] Search a task.\n");
    printf("\t[3] Add a task.\n");
    printf("\t[0] Exit.\n");
    printf("\n");
}
void printSeeMenu(){
    system("cls");
    printf("\t\t\tTASK MANAGER v1\n");
    printf("\n Sure! Which tasks do you want to see?\n");
    printf("\n");
    printf("\t[1] All my tasks.\n");
    printf("\t[2] Pending tasks.\n");
    printf("\t[3] Current tasks.\n");
    printf("\t[4] Finished tasks.\n");
    printf("\t[0] Main Menu.\n");
    printf("\n");
}
void printSearchMenu(){
    system("cls");
    printf("\t\t\tTASK MANAGER v1\n");
    printf("\n Fine! Type anything to look for... Or 0 (zero) to go back.\n");
    printf("\n");
    //Read and print the matching tasks :D and so on
    printf("\n");
}
void printAddMenu(){
    system("cls");
    printf("\t\t\tTASK MANAGER v1\n");
    printf("\n Good! There you go:\n");
    printf("\n");
    /*          Create a New Task
     *  Title
     *  Description
     *  Difficulty
     *  Expiration Date
     */
    printf("\n(Type 0 to go back.)");
    printf("\n");
}

int main () {
    struct Tarea Tareas[mil];
    for(int i = 0; i < strlen(Tareas); i++){
        printf(" Task %d\n",i);
        printf("\n\t Title:");
        gets(Tareas[i].title);
        printf("\n\t Description:");
        gets(Tareas[i].description);
        printf("\n\t Difficulty:");
        scanf("%d",&Tareas[i].difficulty);
        printf("\n\t State:");
        scanf("%d",&Tareas[i].state);
    }

    for(int i = 0; i < strlen(Tareas); i++){
        printf("\n\t Tarea N°%d\n",i);
        printf("\t\t Title: %s",Tareas[i].title);
        printf("\t\t Description: %s",Tareas[i].description);
        switch (Tareas[i].difficulty) {
            case 1:
                printf("\t\t Difficulty: Easy");
                break;
            case 2:
                printf("\t\t Difficulty: Medium");
                break;
            case 3:
                printf("\t\t Difficulty: Hard");
                break;
        }
        switch (Tareas[i].state) {
            case 1:
                printf("\t\t State: Pending");
                break;
            case 2:
                printf("\t\t State: Current");
                break;
            case 3:
                printf("\t\t State: Finished");
                break;
            case 4:
                printf("\t\t State: Canceled");
                break;
        }
    }
/*
    //variables
    int sel;

    do{
        printMainMenu();
        scanf("%d",&sel);

        //Enter to subMenus
        switch (sel) {
            case 1: //See
                int sel;
                do{
                    printSeeMenu();
                    scanf("%d",&sel);
                } while (sel != 0);
                break;
            case 2: //Search
                do{
                    printSearchMenu();
                    scanf("%d",&sel);
                } while (sel != 0);
                break;
            case 3: //Add
                do {
                    printAddMenu();
                    scanf("%d",&sel);
                } while (sel != 0);
                break;
        }
    } while (sel != 0);

    printf("\nExiting...\n\n");
*/
    return 0;
}
