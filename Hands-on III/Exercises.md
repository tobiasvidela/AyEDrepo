# Exercises (Hands-on III)
### Task 1:
Write an algorithm that asks the user for two numbers and tells us which one is greater or if they are equal.

Create an algorithm that, given an integer, displays on the screen whether it is even or odd. In the case of being 0, the program must ask for the number again until a number greater than zero is entered through the keyboard.
- - -
    ALGORITHM greaterOrEqual {
        int num1, num2;
        char answer[50];
        print("----Greater or Equal----\n Enter a number to compare: \n");
        scan(num1);
        print(" Enter another number to compare: \n");
        scan(num2);
        if (num1 != num2) {
            if (num1 > num2) {
                answer = num1 + " is greater than" + num2 + ".";
            } else {
                answer = num2 + " is greater than" + num1 + ".";
            };
        } else {
            answer = "Both numbers are Equal";
        };
        print(answer);
    };

    ALGORITHM evenOrOdd {
        //variables
        int value;
        char answer[50];

        //ask for the value
        print("----Is it Even or Odd?----\n Enter a number to evaluate (not zero, please): \n");
        scan(value);

        //evaluate the value

        while (value == 0) {
            print("\n NOT ZERO PLEASE. \n");
            scan(value);
        };
        if (value % 2 == 0) {
            answer = " The number " + value + " is even. \n";
        } else {
            answer = " The number " + value + " is odd. \n";
        };

        //display the answer on the screen
        print(answer);
    };
- - -
### Task 2:
Develop an algorithm that calculates the square of the first 9 natural numbers.
- - -
    ALGORITHM squareOf9 {
        //variables
        int number = 1;
        int square;

        //presentation
        print("--- Square of the first 9 natural numbers --- \n");
        //First 9 natural numbers: 1, 2, 3, 4, 5, 6, 7, 8, and 9.

        //calculate and print
        while (number < 10) { //or number <= 9
            print("\n Calculating the square of " + number + "... \n");
            square = number * number;
            print(square);
            number ++; 
        };
        print("That's all. See you.");
    }
- - -
### Task 3:
Write an algorithm that calculates the sum of the first N natural numbers. N will be read from the keyboard.
- - -
    ALGORITHM summation { //of the first N natural numbers
        //variables
        int i = 1, value;
        int sum = 0;

        //presentation
        print("--- Calculate the sum of the first N natural numbers --- \n");

        //ask for {value}
        print(" Please, enter the value for N (1, 7, 12, etc): \n");
        scan(value);

        //calculate the summation of the first {value} natural numbers
        while (i <= value) {
            sum += i;
            i++;
        };

        //print the summation of the first {value} natural numbers
        if (value <= 0) {
            print(" Please, enter an integer bigger than zero next time. \n");
        } else {
            print("The summation is: " + sum);
        };
    };
- - -
### Task 4:
Write an algorithm that calculates the sum of the first N even numbers.
- - -
    ALGORITHM evenSummation { //of the first N even numbers
        //variables
        int i = 1;
        int value;
        int sum = 0;

        //presentation
        print("--- Calculate the sum of the first N even numbers --- \n");

        //ask for {value}
        print(" Please, enter the value for N (1, 5, 73[PLEASE DON'T], 10, etc): \n");
        scan(value);

        //calculate the summation of the first {value} even numbers
        while (i <= value) {
            sum += 2 * i;
            i++;
        };

        //print the summation of the first {value} even numbers
        if (value <= 0) {
            print(" Please, enter an integer bigger than zero next time. \n");
        } else {
            print("The summation is: " + sum);
        };
    };
- - -
### Task 5:
Write an algorithm that reads integer numbers until 0 is typed, and shows us the maximum, minimum, and average of all of them.
- - -
    ALGORITHM max_min_avg {
        //variables
        int i = 1;
        int accum = 0;
        int number;
        int max = 0;
        int min = 0;
        float avg = 0;

        //presentation
        print("--- Maximum, Minimum and Average of N Integers --- \n");
        print(" Enter multiple integer numbers as you want. Until you enter 0, it won't stop. \n");

        //ask for numbers until 0 is typed
        print(" Enter integers: \n");
        scan(number);

        while (number != 0) {

            //first max and min values
            if (max == 0) {
                max = number;
            };
            if (min == 0) {
                min = number;
            };

            //evaluate max and min
            if (number > max) {
                max = number;
            };
            if (number < min) {
                min = number;
            };

            //calculate average
            accum += number;
            avg = accum / i;

            //increment amount of numbers
            i++;

            //ask for an integer again
            scan(number);
        };

        //when 0 is typed
        print("\n Maximum = " + max + ". \n");
        print("\n Minimum = " + min + ". \n");
        print("\n Average = " + avg + ". \n");
    };
- - -

AUTHOR'S NOTE:

I tried to use only _while_ loops in the previous exercises. Now I won't limit myself to that.

### Task 6:
Write a menu for our calculator.
- - -
    //introducing the function system(cls): clears the prints on the screen
    //introducing the function system(pause): waits before proceeding with the program
    
    ALGORITHM calculatorWithMenu {
        //variables
        int sel; //selector
        float op1; //operand1
        float op2; //operand2
        float r; //result

        //menu
        do {
            system(cls);
            print("------- BASIC CALCULATOR ------- \n\n");
            print("1. Add two numbers.\n");
            print("2. Subtract two numbers.\n");
            print("3. Multiply two numbers.\n");
            print("4. Divide two numbers.\n");
            print("5. Exit.\n\n");
            print("-------------------------------- \n\n");
            print("Select: ");
            scan(sel);
            switch(sel){ //submenus
                case 1:
                    system(cls);
                    print("------- BASIC CALCULATOR ------- \n\n");
                    print("----------- Addition ----------- \n");
                    print("Enter the first value: ");
                    scan(op1);
                    print("\nEnter the last value: ");
                    scan(op2);
                    r = op1 + op2;
                    print("\nThe result is: " + r + ". \n");
                    print("-------------------------------- \n\n");
                    system(pause);
                    break;
                case 2:
                    system(cls);
                    print("------- BASIC CALCULATOR ------- \n\n");
                    print("---------- Subtraction --------- \n");
                    print("Enter the first value: ");
                    scan(op1);
                    print("\nEnter the last value: ");
                    scan(op2);
                    r = op1 - op2;
                    print("\nThe result is: " + r + ". \n");
                    print("-------------------------------- \n\n");
                    system(pause);
                    break;
                case 3:
                    system(cls);
                    print("------- BASIC CALCULATOR ------- \n\n");
                    print("-------- Multiplication -------- \n");
                    print("Enter the first value: ");
                    scan(op1);
                    print("\nEnter the last value: ");
                    scan(op2);
                    r = op1 * op2;
                    print("\nThe result is: " + r + ". \n");
                    print("-------------------------------- \n\n");
                    system(pause);
                    break;
                case 4:
                    system(cls);
                    print("------- BASIC CALCULATOR ------- \n\n");
                    print("----------- Division ----------- \n");
                    print("Enter the first value: ");
                    scan(op1);
                    do {
                        print("\nEnter the last value (Not Zero): ");
                        scan(op2);
                    } while (op2 == 0);
                    r = op1 / op2;
                    print("\nThe result is: " + r + ". \n");
                    print("-------------------------------- \n\n");
                    system(pause);
                    break;
                case 5:
                    break;
                default:
                    system(cls);
                    print("That option does not exists.\n");
                    system(pause);
                    break;
            }
        } while (sel != 5);
        return 0;
    }
- - -
___Videla Guliotti, Tobías Uriel___ | ___DNI___ _44.246.096_ | ___05/04/23___
- - -