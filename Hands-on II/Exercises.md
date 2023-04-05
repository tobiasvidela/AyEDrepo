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
### Task 7:
Write an algorithm that tells us whether a person can enroll in the university.
+ A person must have completed high school to gain access to the university.
+ Without a high school degree, who are over 25 years old can also gain access if they pass an entrance exam.
- - -
    ALGORITHM accessToUniversity {
        //variables
        bool highSchoolDegree;
        bool age25;
        bool examPassed;
        char yesOrNo;

        //presentation
        print("----Can I enroll in University?----\n");

        //ask for a high school degree
        print("Do you have a High School Degree? Type 'y' (yes) or 'n' (no) \n");
        scan(yesOrNo);

        //evaluate the acces to the university
        highSchoolDegree = (yesOrNo == 'y') ? true : false;

        if (highSchoolDegree) {
            print("\n You can apply to the University. \n");
        } else { //asks for the age
            print("\n Are you 25 or older? Type 'y' (yes) or 'n' (no) \n");
            scan(yesOrNo);
            age25 = (yesOrNo == 'y' ) ? true : false;

            if (age25) { //ask for the entrance exam
                print("\n Did you pass the entrance exam? Type 'y' (yes) or 'n' (no) \n");
                scan(yesOrNo);
                examPassed = (yesOrNo == 'y') ? true : false;

                if (examPassed) {
                    print("\n You can apply to the University. \n");
                } else {
                    print("\n You can´t enroll in University. \n");
                };
            } else {
                print("\n You can´t enroll in University.\n");
            };
        };
    };
- - -
### Integrative Task:
Use the algorithms from ___Manos a la obra I___ to build a calculator that can solve basic operations. The calculator should be limited to one operator and two operands, which should be requested from the user.
- - -
    ALGORITHM calculator {
        //I will not use loops until they are requested
        //variables
        float op1, op2, r = 0;
        char op;

        //presentation
        print("---------------- CALCULATOR ----------------\n");
        print("--- Basic operations between two (real) numbers. ---\n");

        //ask for operand1
        print(" Enter the first value: \n");
        scan(op1);

        //ask for operator
        print(" Enter an operator ('+', '-', '*', or '/'): \n");
        scan(op);

        //ask for operand2
        print(" Enter the last value: \n");
        scan(op2);
        print(" ... \n");

        //calculate
        switch(op) {
            case '+':
                r = op1 + op2;
                break;
            case '-':
                r = op1 - op2;
                break;
            case '*':
                r = op1 * op2;
                break;
            case '/':
                if (op2 == 0) {
                    print(" I can not divide by zero. \n");
                } else {
                    r = op1 / op2;
                };
                break;
            default:
                print("There was an error with the operator while calculating.");
                break;
        };

        //display the result
        print(" The final result was: " + r + ". \n");
    };
- - -
___Videla Guliotti, Tobías Uriel___ | ___DNI___ _44.246.096_ | ___05/04/23___
- - -