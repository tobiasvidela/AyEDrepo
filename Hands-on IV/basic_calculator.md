# Exercise (Hands-on IIV)
### Task:
Rewrite your calculator using the power of procedures and functions to improve readability.
- - -
    ALGORITHM calculator {
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
        float multiply(float num1, float num2){
            while (num2 == 0){
                scan(num2);
            }
            return num1 / num2;
        }

        //select sub menu
        string selectSubMenu(int menu){
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
                    return "error";
                    break;
            }
        }

        //select operation to do
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
            }
        }

        //calculate
        void printResult(float result){
            print("The result is: " + result + " \n\n");
        }

        //ask for operand
        void askOperand(float number){
            print("Enter a number: \n");
            scan(number);
        }

        //print menu
        void printMenu(){
            system("cls");
            print("\n  --------- BASIC CALCULATOR ---------  \n");
            print(" 1. Add two numbers\n")
            print(" 2. Subtract two numbers\n")
            print(" 3. Multiply two numbers\n")
            print(" 4. Divide two numbers\n")
            print(" 5. Exit\n\n")
            print(" Select: \n\n")
        }

        //print sub menu
        void printSubMenu(string operation){
            system("cls");
            print("\n  --------- BASIC CALCULATOR ---------  \n");
            print(operation);
        }

        //menu
        do {
            printMenu();
            scan(sel);
            //sub menus
            printSubMenu(selectSubMenu(sel));
            printResult(calculate(sel));
            system("pause");
        } while (sel != 5);
    }
- - -
___Videla Guliotti, Tobías Uriel___ | ___DNI___ _44.246.096_ | ___05/04/23___
- - -