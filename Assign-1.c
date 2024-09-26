/*Write a C program to implement a simple calculator that performs addition, subtraction, 
multiplication, and division based on user input. Write the program using all the four variations of function.*/



#include <stdio.h> 


void add_no_arg_no_return(); 
void subtract_with_arg_no_return(int a, int b); 
int multiply_no_arg_with_return(); 
int divide_with_arg_with_return(int a, int b);
int main() {
    int choice, a, b, result;

    printf("Simple Calculator\n");
    printf("1. Addition (No argument, No return)\n");
    printf("2. Subtraction (With argument, No return)\n");
    printf("3. Multiplication (No argument, With return)\n");
    printf("4. Division (With argument, With return)\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            add_no_arg_no_return();
            break;

        case 2:
            printf("Enter two numbers: ");
            scanf("%d %d", &a, &b);
            subtract_with_arg_no_return(a, b);
            break;

        case 3:
            result = multiply_no_arg_with_return();
            printf("Result of multiplication: %d\n", result);
            break;

        case 4:
            printf("Enter two numbers: ");
            scanf("%d %d", &a, &b);
            result = divide_with_arg_with_return(a, b);
            if (result != -1) {
                printf("Result of division: %d\n", result);
            }
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}


void add_no_arg_no_return() {
    int a, b;
    printf("Enter two numbers to add: ");
    scanf("%d %d", &a, &b);
    printf("Result of addition: %d\n", a + b);
}


void subtract_with_arg_no_return(int a, int b) {
    printf("Result of subtraction: %d\n", a - b);
}

int multiply_no_arg_with_return() {
    int a, b;
    printf("Enter two numbers to multiply: ");
    scanf("%d %d", &a, &b);
    return a * b;
}


int divide_with_arg_with_return(int a, int b) {
    if (b == 0) {
        printf("Error! Division by zero.\n");
        return -1; 
    }
    return a / b;
}
