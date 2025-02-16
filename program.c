#include<stdio.h> 
#include<stdlib.h> 
#include<string.h> 


void addition (){

    int a, b, sum;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    sum = a + b;
    printf("The sum of %d and %d is %d\n", a, b, sum);

}

void subtraction (){

    int a, b, sub;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    sub = a - b;
    printf("The subtraction of %d and %d is %d\n", a, b, sub);

}

void multiplication (){

    int a, b, mult;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    mult = a * b;
    printf("The multiplication of %d and %d is %d\n", a, b, mult);

}

void division (){

    int a, b, div;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    div = a / b;
    printf("The division of %d and %d is %d\n", a, b, div);

}

void fillarray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("Enter element %d: ", i);
        scanf("%d", &arr[i]);
    }
}

void printarray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void bubblesortarray(){ 

    int n, i, j, temp; 
    printf("Enter the number of elements: "); 
    scanf("%d", &n); 
    int arr[n]; 
    printf("Enter the elements: "); 
    for (i = 0; i < n; i++) { 
        scanf("%d", &arr[i]); 
    } 
    for (i = 0; i < n-1; i++) { 
        for (j = 0; j < n-i-1; j++) { 
            if (arr[j] > arr[j+1]) { 
                temp = arr[j]; 
                arr[j] = arr[j+1]; 
                arr[j+1] = temp; 
            } 
        } 
    } 
    printf("Sorted array: "); 
    for (i = 0; i < n; i++) { 
        printf("%d ", arr[i]); 
    } 
    printf("\n"); 

}

void forchar() {
    int i=101;
    char array[100]; 

    printf("Enter a string: \n");
    scanf("%s", array);
    printf("Enter the value of i: \n");
    scanf("%d", &i);
    for (int j = 0; j < i; j++) {
        printf("%s\t", array);
    }
    printf("\n");
}

void comparenumbers() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    if (a > b) {
        printf("%d is greater than %d\n", a, b);
    } else {
        printf("%d is greater than %d\n", b, a);
    }
}

char input[2048]; 

int main () {

    puts("Demy programing language v0.0.1");
    puts("Press Ctrl+c to exit\n");
    puts("Type 'exit' to exit\n");

    while(1) {
        fputs("demy> ", stdout);
        fgets(input, 2048, stdin);
        if(strcmp(input, "exit\n") == 0) {
            exit(0);
        } else if (strcmp(input, "add\n")  == 0) {
            addition();
        } else if (strcmp(input, "sub\n")  == 0) {
            subtraction();
        } else if (strcmp(input, "mult\n") == 0) {
            multiplication();
        } else if (strcmp(input, "div\n")  == 0) {
            division();
        } else if (strcmp(input, "fillarray\n") == 0) {
            int size;
            printf("Enter the size of the array: ");
            scanf("%d", &size);
            int arr[size];
            fillarray(arr, size);
            printarray(arr, size);
        } else if (strcmp(input, "printarray\n") == 0) {
            int size;
            printf("Enter the size of the array: ");
            scanf("%d", &size);
            int arr[size];
            fillarray(arr, size);
            printarray(arr, size);
        }   else if (strcmp(input, "bubblesort\n") == 0) {
            bubblesortarray();
        } else if (strcmp(input, "forchar\n") == 0) {
            forchar();
        } else if (strcmp(input, "compare\n") == 0) {
            comparenumbers();
        } 
        else if(strcmp(input, "help\n") == 0) {
            puts("add: Addition of two numbers");
            puts("sub: Subtraction of two numbers");
            puts("mult: Multiplication of two numbers");
            puts("div: Division of two numbers");
            puts("fillarray: Fill an array with elements");
            puts("printarray: Print the elements of an array");
            puts("bubblesort: Sort an array using bubble sort");
            puts("forchar: Print a string n times");
            puts("compare: Compare two numbers");
            puts("exit: Exit the program");
        } 
        else {
            printf("Error: Command not found\n");
        }  
    }

    return 0;

}
