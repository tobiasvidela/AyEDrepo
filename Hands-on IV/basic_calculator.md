# Exercise (Hands-on IIV)
### Task:
Rewrite your calculator using the power of procedures and functions to improve readability.
- - -
    ALGORITHM basicCalculator2 {

        //Variables

        int sel; //selector
        float op1; //operand 1
        float op2; //operand 2
        float result = 0; //result
        bool repeat = true; //for repeating a task

        //Procedures


        void printTitle(){ //Print Title
            system("cls"); //cleans the console
            print("\n ------------- CALCULATOR v2.0 -------------\n"); //Title
        }

        void printMenu(){ //Print Main Menu
            printTitle();
            print(" - 0. Exit                                 -\n"); //exit program
            print(" - 1. Add two numbers                      -\n"); //addition Sub Menu
            print(" - 2. Subtract two numbers                 -\n"); //subtraction Sub Menu
            print(" - 3. Multiply two numbers                 -\n"); //multiplication Sub Menu
            print(" - 4. Divide two numbers                   -\n"); //division Sub Menu
            print(" -------------------------------------------\n");
            print("\n Select: "); //Select a Sub Menu
        }

        void printSubMenu(char * selected){ //Print Sub Menu
            printTitle();
            print(selected); //print selected Sub Menu
        }

        void askOperand(float op){ //Scan Operand
            print(" Enter a number: ");
            scan(op);
            print("\n");
        }

        void askToRepeat(){ //Ask To Repeat
            print("\n Type 1 to continue operating. \n"); //repeat
            print("\n Type 0 to exit this sub menu. \n"); //exit
            print("\n Repeat? (1-0) = "); //select
            scan(repeat);
        }


        //Functions


        string selectSubMenu(int sel){ //Select Sub Menu
            switch(sel){ //select strings depending on 'sel' value
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
                default: //just in case
                    return "\n\n Error when selecting Sub Menu.\n\n";
                    break;
            }
        }

        float calculate(int sel,float op1,float op2){ //Calculate
            switch(sel){ //operate depending on 'sel' value
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

            while (sel != 0) {
                printMenu();
                scan(sel);
                repeat = true;

                while (repeat  (sel > 0)  (sel < 5)){ //Sub Menu
                    //print selected Sub Menu
                    printSubMenu(selectSubMenu(sel));
                    //scan operands
                    askOperand(op1);
                    askOperand(op2);
                    //calculate
                    result = calculate(sel,op1,op2);
                    //print result
                    print("\n Result = " + result + "\n");
                    askToRepeat();
                }

            }

            print("\n Exiting... \n\n");

            return 0;
        }


    } //end program
- - -
___Videla Guliotti, Tobías Uriel___ | ___DNI___ _44.246.096_ | ___05/04/23___
- - -