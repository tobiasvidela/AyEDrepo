#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Menus
void printMainMenu(){
    system("cls");
    printf("\t\t\t TASK MANAGER v1 \n");
    printf("\n\t\t Welcome User! What do you want to do? \n");
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
    printf("\n\t\tSure! Which tasks do you want to see?\n");
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
    printf("\n\t\tFine! Type anything to look for... Or 0 (zero) to go back.\n");
    printf("\n");
    //Read and print the matching tasks :D and so on
    printf("\n");
}
void printAddMenu(){
    system("cls");
    printf("\t\t\tTASK MANAGER v1\n");
    printf("\n\t\tGood! There you go:\n");
    printf("\n");
    /*          Create a New Task
     *  Title
     *  Description
     *  Difficulty
     *  Expiration Date
     */
    printf("\n");
}

int main () {

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

    return 0;
}
