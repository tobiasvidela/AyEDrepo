#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define mil 1000

//structs
struct Task {
    char title[100];
    char description[500];
    int difficulty; //Easy-Medium-Hard||1-2-3
    int state; //Pending-In progress-Finished-Canceled||1-2-3-4
    /*      DATES
     *  char creation[30];
     *  char expiration[30];
     *  char lastEdit[30];
    */
};

//global variables
struct Task Tasks[mil]; //all tasks
int lastAdded = 0; //last task added

//Menus
void printTitle(){
    printf("\t\t\t TASK MANAGER v1 \n");
}
void printMainMenu(){
    system("cls");
    printTitle();
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
    printTitle();
    printf("\n Sure! Which tasks do you want to see?\n");
    printf("\n");
    printf("\t[1] All my tasks.\n");
    printf("\t[2] Pending tasks.\n");
    printf("\t[3] Tasks in progress.\n");
    printf("\t[4] Finished tasks.\n");
    printf("\t[0] Go back.\n");
    printf("\n");
}
void printSearchMenu(){
    system("cls");
    printTitle();
    printf("\n Fine! Type anything to look for... Or 0 (zero) to go back.\n");
    printf("\n");
    //Read and print the matching tasks :D and so on
    printf("\n");
}
void printAddMenu(){
    system("cls");
    printTitle();
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

//Functions
void selectMenus(int sel){
    switch (sel) {
        case 1: //See
            int sel;
            do{
                printSeeMenu();
                scanf("%d",&sel);
                //SubMenu
            } while (sel != 0);
            break;
        case 2: //Search
            do{
                printSearchMenu();
                scanf("%d",&sel);
                //Search tasks
            } while (sel != 0);
            break;
        case 3: //Add
            do {
                printAddMenu();
                //addTask()
                scanf("%d",&sel); //temporary
            } while (sel != 0);
            break;
    }
}
void addTask(){
    fflush(stdin);
    printf("\n\t Title:");
    gets(Tasks[lastAdded].title);
    printf("\n\t Description:");
    gets(Tasks[lastAdded].description);
    printf("\n\t Difficulty:");
    scanf("%d",&Tasks[lastAdded].difficulty);
    printf("\n\t State:");
    scanf("%d",&Tasks[lastAdded].state);

    lastAdded++;
}

int main () {

    //variables
    int sel;
    addTask();

    //App
    do{
        printMainMenu();
        scanf("%d",&sel);

        //Enter to subMenus
        selectMenus(sel);



    } while (sel != 0);

    printf("\nExiting...\n\n");

    return 0;
}
