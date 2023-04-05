# Exercises (Hands-on II)
### Task 1:
Write an algorithm that asks the user for two numbers and tells us wich one is greater or if they are equal.
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
                answer = num1 + " is Greater than" + num2 + ".";
            } else {
                answer = num2 + " is Greater than" + num1 + ".";
            };
        } else {
            answer = "Both numbers are Equal";
        };
        print(answer);
    };
- - -
### Task 2:
Modifiy the previous algorithm to work with three numbers instead of two.
- - -
    ALGORITHM greaterOrEqual2 {
        //declare variables
        int num1, num2, num3;
        int max1, max2;
        char answer[75];

        //aks for the numbers
        print("----Greater or Equal (with 3 numbers)----\n Enter a number to compare: \n");
        scan(num1);
        print(" Enter another number to compare: \n");
        scan(num2);
        print(" Enter the last number to compare: \n");
        scan(num3);

        //calculate the greater or equal
        if (num1 != num2) { //first the greater between num1 and num2
            if (num1 > num2) {
                max1 = num1;
            } else {
                max1 = num2;
            };
        } else {
            max1 = num1;
        };
        if (num2 != num3) { //now the greater between num2 and num3
            if (num2 > num3) {
                max2 = num2;
            } else {
                max2 = num3;
            };
        } else {
            max2 = num2;
        };
        if (max1 != max2) { //now the greater between max1 and max2
            if (max1 > max2) {
                answer = max1 + " is the greater number.";
            } else {
                answer = max2 + " is the greater number.";
            };
        } else {
            answer = max1 + " is the greater number.";
        };
        print(answer);
    };
- - -
Skipping tasks 3, 4 and 5...
- - -
### Task 6:
Write an algorithm that, given an integer, displays on the screen whether it is even or odd. In the case of being 0, it should display 'the number is neither even nor odd'.
- - -
    ALGORITHM evenOrOdd {
        //variables
        int value;
        char answer[50];

        //ask for the value
        print("----Is it Even or Odd?----\n Enter a number to evaluate: \n");
        scan(value);

        //evaluate value
        if (value == 0) {
            answer = "The value is neither even nor odd";
        } else {
            if (value % 2 == 0) {
                answer = "The value is even";
            } else {
                answer = "The value is odd";
            };
        };

        //display the answer on the screen
        print(answer);
    };
- - -
### Task N:

- - -
    ALGORITHM something {
    };
- - -