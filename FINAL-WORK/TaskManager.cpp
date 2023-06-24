#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define mil 1000

/*          NOTES
 *
 *  ALL TASKS WILL BE LISTED WITH A NUMBER ABOVE THEIR ACTUAL POSITION IN THE TASKS ARRAY
 *  TO DO:
 *
 */


//struct
struct Task {
    char title[100];
    char description[500];
    int difficulty; //Easy-Medium-Hard||1-2-3
    int state; //Pending-In progress-Finished-Canceled||1-2-3-4
};

//global variables
struct Task Tasks[mil]; //all tasks
int lastAdded = 0; //(last position of array used) + 1

//Menus

void printTitle(){
    printf("\t\t\t TASK MANAGER v1 \n");
}

void printBackOrDetails(){
    printf("\n What do you want to do next?");
    printf("\n\t [0] Go back.");
    printf("\n\t [...] Select the number of any listed task to go to its Details Menu.\n");
}

void printMainMenu(){
    system("cls");
    printTitle();
    printf("\n Welcome User!\n What do you want to do? \n");
    printf("\n");
    printf("\t[1] See my tasks.\n");
    printf("\t[2] Search for a task.\n");
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
    printf("\n Fine! Type a word or phrase to look for: ");
}

void printAddMenu(){
    system("cls");
    printTitle();
    printf("\n Good! There you go:\n");
    printf("\n");
}

void printDetailsMenu(int selectedTask){
    //selectedTask-1 is the actual position of the selected task
    system("cls");
    printTitle();
    printf("\n Details Menu of \"%s\":\n\n",Tasks[selectedTask-1].title);
    printf("\t %s \n\n",Tasks[selectedTask-1].title);
    printf("\t %s \n\n\n",Tasks[selectedTask-1].description);
    switch(Tasks[selectedTask-1].state){
        case 1:
            printf("\t State:               Pending \n");
            break;
        case 2:
            printf("\t State:               In Progress \n");
            break;
        case 3:
            printf("\t State:               Finished \n");
            break;
        case 4:
            printf("\t State:               Canceled \n");
            break;
    }
    switch(Tasks[selectedTask-1].difficulty){
        case 1:
            printf("\t Difficulty:          Easy \n");
            break;
        case 2:
            printf("\t Difficulty:          Medium \n");
            break;
        case 3:
            printf("\t Difficulty:          Hard \n");
            break;
    }
    printf("\n");
    printf("\n Type 0 to go back, or 1 to edit.\n");
}

void printEditMenu(int selectedTask){
    //selectedTask-1 is the actual position of the selected task
    system("cls");
    printTitle();
    printf("\n You are about to edit \"%s\".\n",Tasks[selectedTask-1].title);
    printf("\t -Write a 0 (zero) to not edit an attribute.\n");
}

void printAllTasks(){
    system("cls");
    printTitle();
    printf("\n These are all your tasks:\n");
    for(int i = 0; i < lastAdded; i++){ //list all added tasks, starting from 1
        printf("\n\t [%d] %s\n",i+1,Tasks[i].title);
    }
    printf("\n");
    printBackOrDetails();
    printf("\n");
}

void printPendingTasks(){
    system("cls");
    printTitle();
    printf("\n These are your pending tasks:\n");
    for(int i = 0; i < lastAdded; i++){ //list all pending tasks
        if (Tasks[i].state == 1){
            printf("\n\t [%d] %s\n",i+1,Tasks[i].title);
        }
    }
    printf("\n");
    printBackOrDetails();
    printf("\n");
}

void printInProgressTasks(){
    system("cls");
    printTitle();
    printf("\n These are your tasks in progress:\n");
    for(int i = 0; i < lastAdded; i++){ //list all tasks in progress
        if (Tasks[i].state == 2){
            printf("\n\t [%d] %s\n",i+1,Tasks[i].title);
        }
    }
    printf("\n");
    printBackOrDetails();
    printf("\n");
}

void printFinishedTasks(){
    system("cls");
    printTitle();
    printf("\n These are your finished tasks:\n");
    for(int i = 0; i < lastAdded; i++){ //list all finished tasks
        if (Tasks[i].state == 3){
            printf("\n\t [%d] %s\n",i+1,Tasks[i].title);
        }
    }
    printf("\n");
    printBackOrDetails();
    printf("\n");
}

void printMatches(char *key){
    printf("\nThese are the matches:\n");
    for(int i = 0; i < lastAdded; i++){ //list all matching task
        if (strstr(Tasks[i].title,key) != NULL || strstr(Tasks[i].description,key) != NULL) {
            printf("\n\t [%d] %s\n",i+1,Tasks[i].title);
        }
    }
}


//Functions


void addTask(){
    fflush(stdin);
    printf("\n\t Title (Max. 100 characters) : ");
    gets(Tasks[lastAdded].title);
    printf("\n\t Description (Max. 500 characters) : ");
    gets(Tasks[lastAdded].description);
    printf("\n\t Difficulty (1 - 2 - 3) : ");
    scanf("%d",&Tasks[lastAdded].difficulty);
    printf("\n\t State ([1]Pending - [2]In Progress - [3]Finished - [4]Canceled) : ");
    scanf("%d",&Tasks[lastAdded].state);

    lastAdded++;
}

void editTask(int selectedTask){
    char newTitle[100];
    char newDescription[500];
    int newDifficulty;
    int newState;
    //New Expiration Date

    fflush(stdin);
    printf("\n\t New Title (Max. 100 characters) : ");
    gets(newTitle);
    if (strcmp(newTitle,"0") != 0) {
        strcpy(Tasks[selectedTask-1].title, newTitle);
    }

    fflush(stdin);
    printf("\n\t New Description (Max. 500 characters) : ");
    gets(newDescription);
    if (strcmp(newDescription,"0") != 0) {
        strcpy(Tasks[selectedTask-1].description, newDescription);
    }

    fflush(stdin);
    printf("\n\t New Difficulty (1 - 2 - 3) : ");
    do {
        scanf("%d",&newDifficulty);
        if (newDifficulty != 0) {
            if (newDifficulty < 4 && newDifficulty > 0) {
                Tasks[selectedTask-1].difficulty = newDifficulty;
            }
        }
    } while (newDifficulty > 3 || newDifficulty < 0);

    fflush(stdin);
    printf("\n\t New State ([1]Pending - [2]In Progress - [3]Finished - [4]Canceled) : ");
    do {
        scanf("%d",&newState);
        if (newState != 0) {
            if (newState < 5 && newState > 0) {
                Tasks[selectedTask-1].state = newState;
            }

        }
    } while (newState > 5 || newState < 0);


    printf("\n");
    printf("\nChanges saved!");
    printf("\n");
    printf("\t Type 0 (zero) to continue...");
}

void listTasks(int sel){
    switch (sel) {
        case 1: //All Tasks
            int sel;
            do{
                printAllTasks();
                scanf("%d",&sel);
                if (sel != 0){
                    do {
                        int selectedTask = sel;
                        printDetailsMenu(sel);
                        scanf("%d",&sel);
                        if (sel == 1) {
                            printEditMenu(selectedTask);
                            editTask(selectedTask);
                            scanf("%d",&sel);
                        }
                    } while (sel != 0);
                }
            } while (sel != 0);
            break;
        case 2: //Pending Tasks
            do{
                printPendingTasks();
                scanf("%d",&sel);
                if (sel != 0){
                    do {
                        int selectedTask = sel;
                        printDetailsMenu(sel);
                        scanf("%d",&sel);
                        if (sel == 1) {
                            printEditMenu(selectedTask);
                            editTask(selectedTask);
                            scanf("%d",&sel);
                        }
                    } while (sel != 0);
                }
            } while (sel != 0);
            break;
        case 3: //Tasks In Progress
            do{
                printInProgressTasks();
                scanf("%d",&sel);
                if (sel != 0){
                    do {
                        int selectedTask = sel;
                        printDetailsMenu(sel);
                        scanf("%d",&sel);
                        if (sel == 1) {
                            printEditMenu(selectedTask);
                            editTask(selectedTask);
                            scanf("%d",&sel);
                        }
                    } while (sel != 0);
                }
            } while (sel != 0);
            break;
        case 4: //Finished Tasks
            do{
                printFinishedTasks();
                scanf("%d",&sel);
                if (sel != 0){
                    do {
                        int selectedTask = sel;
                        printDetailsMenu(sel);
                        scanf("%d",&sel);
                        if (sel == 1) {
                            printEditMenu(selectedTask);
                            editTask(selectedTask);
                            scanf("%d",&sel);
                        }
                    } while (sel != 0);
                }
            } while (sel != 0);
            break;
    }
}

void searchTask(){
    int found = 0;
    char key[500];

    //get string to search for
    fflush(stdin);
    gets(key);

    //searching work
    for(int i = 0; i < lastAdded; i++){
        if (strstr(Tasks[i].title,key) != NULL || strstr(Tasks[i].description,key) != NULL) {
            found = 1;
        }
    }
    //printing results
    if (found == 1) {
        printMatches(key);
        printBackOrDetails();
    } else {
        printf("\n It seems that there are no matches.");
        printf("\n Type 0 (zero) to go back.\n");
    }
}

void selectMenus(int sel){
    switch (sel) {
        case 1: //See
            int sel;
            do{
                printSeeMenu();
                scanf("%d",&sel);
                listTasks(sel);
            } while (sel != 0);
            break;
        case 2: //Search
            do{
                printSearchMenu();
                searchTask();
                scanf("%d",&sel);
                if (sel != 0){
                    do {
                        int selectedTask = sel;
                        printDetailsMenu(sel);
                        scanf("%d",&sel);
                        if (sel == 1) {
                            printEditMenu(selectedTask);
                            editTask(selectedTask);
                            scanf("%d",&sel);
                        }
                    } while (sel != 0);
                }
            } while (sel != 0);
            break;
        case 3: //Add
            do {
                printAddMenu();
                addTask();
                printf("\n");
                printf("\nTask Saved\n");
                system("pause");
                sel = 0;
            } while (sel != 0);
            break;
    }
}



int main () {

    //variables
    int sel;


    //Execute App
    do{

        printMainMenu();
        scanf("%d",&sel);
        selectMenus(sel);

    } while (sel != 0);

    printf("\nExiting...\n\n");

    return 0;
}
