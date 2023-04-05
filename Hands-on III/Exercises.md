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
### Task N:
Description.
- - -
    ALGORITHM something {
    }
- - -
### Task N:
Description.
- - -
    ALGORITHM something {
    }
- - -
___Videla Guliotti, Tobías Uriel___ | ___DNI___ _44.246.096_ | ___05/04/23___
- - -