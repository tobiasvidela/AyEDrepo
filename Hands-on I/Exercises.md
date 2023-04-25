# Exercises (Hands-on I)
### Task 1:
Try to write an algorithm that allows a person to enter two numbers via the keyboard and then calculate their sum.
- - -
    ALGORITHM add
        int num1, num2, sum;
        print("Enter a number: ");
        scan(num1);
        print("Enter a second number: ");
        scan(num2);
        sum = num1 + num2;
        print(num1 + " + " + num2 + " = " + sum + ".");
    END
- - -
### Task 2:
Use the previous algorithm to create three new algorithms that can solve the other three basic operations: _subtraction_, _multiplication_, and _division_
- - -
    ALGORITHM subtract
        int num1, num2, subtraction;
        print("Enter a first number: ");
        scan(num1);
        print("Enter a second number: ");
        scan(num2);
        substraction = num1 - num2;
        print(num1 + " - " + num2 + " = " + subtraction + ".");
    END

    ALGORITHM multiply
        int num1, num2, multiplication;
        print("Enter a first number: ");
        scan(num1);
        print("Enter a second number: ");
        scan(num2);
        multiplication = num1 * num2;
        print(num1 + " * " + num2 + " = " + multiplication + ".");
    END

    ALGORITHM divide
        int num1, num2;
        float division;
        print("Enter a first number: ");
        scan(num1);
        print("Enter a second number: ");
        scan(num2);
        division = num1 / num2; // num2 != 0
        print(num1 + " / " + num2 + " = " + division + ".");
    END
- - -
### Task 3:
Write an algorithm to solve the problem of swapping the values of two variables.

For example, if I have variable A with value 1 and variable B with value 2, I should obtain the following final result:

+ Variable A should contain what was in B (2).
+ Variable B should contain what was in A (1).
- - -
    ALGORITHM swapValues
        int A = 1, B = 2, temp;
        print("A = " + A + "\nB = " + B + "\n...Swapping...\n");
        temp = A;
        A = B;
        B = temp;
        print("A = " + A + "\nB = " + B);
    END
- - -
### Task 4:
Modify the previous algorithm to allow the values of the variables to be entered by a person.
- - -
    ALGORITHM swapValues
        int A, B, temp;
        print("Enter a value for A: ");
        scan(a);
        print("Enter a value for B: ");
        scan(b);
        print("A = " + A + "\nB = " + B + "\n...Swapping...\n");
        temp = A;
        A = B;
        B = temp;
        print("Now A = " + A + "\nB = " + B);
    END
- - -
___Videla Guliotti, Tobías Uriel___ | ___DNI___ _44.246.096_ | ___01/04/23___
- - -
