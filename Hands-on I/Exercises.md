# Exercises
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
        sum = num1 - num2;
        print(num1 + " - " + num2 + " = " + subtraction + ".");
    END

    ALGORITHM multiply
        int num1, num2, multiplication;
        print("Enter a first number: ");
        scan(num1);
        print("Enter a second number: ");
        scan(num2);
        sum = num1 * num2;
        print(num1 + " * " + num2 + " = " + multiplication + ".");
    END

    ALGORITHM divide
        int num1, num2;
        float division;
        print("Enter a first number: ");
        scan(num1);
        print("Enter a second number: ");
        scan(num2);
        sum = num1 / num2; // num2 != 0
        print(num1 + " / " + num2 + " = " + division + ".");
    END
- - -
### Task 3:
Write an algorithm to solve the problem of swapping the values of two variables.

For example, if I have variable <span style="background: rgba(135,131,120,0.15);color: #EB5757;border-radius: 3px;font-size: 85%;padding: 0.2em 0.4em;">A</span> with value 1 and variable <span style="background: rgba(135,131,120,0.15);color: #EB5757;border-radius: 3px;font-size: 85%;padding: 0.2em 0.4em;">B</span> with value 2, I should obtain the following final result:

+ Variable <span style="background: rgba(135,131,120,0.15);color: #EB5757;border-radius: 3px;font-size: 85%;padding: 0.2em 0.4em;">A</span> should contain what was in <span style="background: rgba(135,131,120,0.15);color: #EB5757;border-radius: 3px;font-size: 85%;padding: 0.2em 0.4em;">B</span> (2).
+ Variable <span style="background: rgba(135,131,120,0.15);color: #EB5757;border-radius: 3px;font-size: 85%;padding: 0.2em 0.4em;">B</span> should contain what was in <span style="background: rgba(135,131,120,0.15);color: #EB5757;border-radius: 3px;font-size: 85%;padding: 0.2em 0.4em;">A</span> (1).
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
        print("Enter a number: ");
        scan(a);
        print("Enter a second number: ");
        scan(b);
        print("A = " + A + "\nB = " + B + "\n...Swapping...\n");
        temp = A;
        A = B;
        B = temp;
        print("A = " + A + "\nB = " + B);
    END
###### ___Videla Guliotti, Tobías Uriel___ | ___DNI___ _44.246.096_ | ___01/04/23___