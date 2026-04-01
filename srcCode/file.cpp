/************************************
 * Section 1: Runnable Programs
 ************************************/

// Lecture 2: Pointer Basic - & operator example
[cite_start]// Demonstrates using the & operator to get the memory address of a variable[cite: 10].
#include <stdio.h>
int main(void){
    char c = 'a';
    printf("c : %c\n", c);
    printf("&c : 0x%0x\n", &c);
}

// Lecture 2: Pointer Basic - * operator example
[cite_start]// Shows how to dereference a pointer to access the value stored at an address[cite: 11, 12].
#include <stdio.h>
int main(void){
    char c = 'a';
    char *ptr = NULL;
    ptr = &c;
    printf("ptr : 0x%0x\n", ptr);
    printf("*ptr : %c\n", *ptr);
}

// Lecture 2: Pointer Basic - Addition/Subtraction (char case)
[cite_start]// Demonstrates pointer arithmetic with char (1 byte)[cite: 13].
#include <stdio.h>
int main(void){
    char c = 'a';
    char *ptr = &c;
    printf("ptr-1 : 0x%0x\n", ptr-1);
    printf("ptr : 0x%0x\n", ptr);
    printf("ptr+1 : 0x%0x\n", ptr+1);
    printf("size of data type : %d\n\n", sizeof(c));
}

// Lecture 2: Pointer Basic - Addition/Subtraction (int case)
[cite_start]// Demonstrates pointer arithmetic with int (4 bytes)[cite: 14].
#include <stdio.h>
void main(void){
    int num = 7;
    int *ptr = NULL;
    ptr = &num;
    printf("ptr-1 : 0x%0x\n", ptr-1);
    printf(" ptr : 0x%0x\n", ptr);
    printf("ptr+1 : 0x%0x\n", ptr+1);
    printf("size of data type : %d\n\n", sizeof(num));
}

// Lecture 2: Pointer Basic - Addition/Subtraction (pointer case)
[cite_start]// Demonstrates pointer-to-pointer arithmetic (double pointer)[cite: 15, 16, 17].
#include <stdio.h>
int main(void){
    char c = 'a';
    char *ptr = &c;
    char **dptr = &ptr;
    printf("dptr-1 : 0x%0x\n", dptr-1);
    printf("dptr : 0x%0x\n", dptr);
    printf("dptr+1 : 0x%0x\n", dptr+1);
    printf("size of data type : %d\n\n", sizeof(ptr));
}

// Lecture 2: Pointer Basic - Call-by-reference swap
[cite_start]// Swaps two integers using pointers (call-by-reference)[cite: 20, 21, 22, 23].
#include <stdio.h>
void swap(int* n1, int* n2){
    int tmp = *n1;
    *n1 = *n2;
    *n2 = tmp;
}
void main(void){
    int num1 = 10, num2 = 50;
    printf(">>Before function call <<\n");
    printf("num1: %d\nnum2: %d\n\n", num1, num2);
    swap(&num1, &num2);
    printf(">>After function call <<\n");
    printf("num1: %d\nnum2: %d\n\n", num1, num2);
}

// Lecture 2: Pointer Basic - Call-by-value swap (Conceptual)
[cite_start]// Attempts to swap two integers using call-by-value (will not swap actual values)[cite: 24, 25].
#include <stdio.h>
void swap(int n1, int n2){
    int tmp = n1;
    n1 = n2;
    n2 = tmp;
}
int main(void){
    int num1 = 10, num2 = 50;
    printf(">>before function call<<\n");
    printf("num1:%d\nnum2:%d\n\n", num1, num2);

    swap(num1, num2);

    printf(">>after function call\n");
    printf("num1:%d\nnum2:%d\n\n", num1,num2);
}


// Lecture 2: Pointer Basic - Const pointer case 1
[cite_start]// Forbids changing the variable using the pointer, but allows change via variable name[cite: 25, 26, 27].
#include <stdio.h>
void main(void){
    int num = 20;
    const int *ptr = &num;
    num = 40; // OK
    //*ptr = 30; // Error
}

// Lecture 2: Pointer Basic - Const pointer case 2
[cite_start]// Forbids changing the value of the pointer (address) itself[cite: 25, 27, 28, 29].
#include <stdio.h>
void main(void){
    int num1 = 20, num2 = 30;
    int *const ptr = &num1;
    *ptr = 40; // OK
    //ptr = &num2; // Error
}

// Lecture 2: Pointer Basic - Const pointer case 3
[cite_start]// Forbids both changing the variable via pointer and changing the pointer's address[cite: 29].
#include <stdio.h>
void main(void){
    int num1 = 10, num2 = 50;
    const int *const ptr = &num1;
    //*ptr = 40; // Error
    //ptr = &num2; // Error
}

// Lecture 2: Pointer Basic - Void pointer with cast
[cite_start]// Demonstrates using a void pointer and casting to access the pointed-to value[cite: 30].
#include <stdio.h>
void main(void){
    int num = 100;
    void *ptr = &num;
    printf("%d\n", *(int *)ptr);
}

// Lecture 3: Pointer Array - arr[i] == *(arr+i)
[cite_start]// Shows equivalence between array indexing and pointer arithmetic[cite: 297, 298, 299].
#include <stdio.h>
void main(void){
    int arr[3] = {7, 14, 21};
    printf("%d\n", arr[2]);
    printf("%d\n", *(arr+2));
}

// Lecture 3: Pointer Array - Pointer with array
[cite_start]// Demonstrates using a pointer to access array elements by address[cite: 300].
#include <stdio.h>
void main(void){
    int arr[3] = {7, 14, 21};
    int *ptr = arr;
    printf("%d\n", ptr[1]);
    printf("%d\n", arr[1]);
}

// Lecture 3: Pointer Array - Negative index
[cite_start]// Demonstrates that arr[-2] is valid and points to the memory location *(arr-2)[cite: 301, 302].
#include <stdio.h>
void main(void){
    char tmp[5] = {1, 2, 3, 4, 5};
    char *arr = tmp + 4;
    printf("%d\n", arr[-2]);
}

// Lecture 3: Pointer Array - Function call with array
[cite_start]// Demonstrates passing an array as an address (call-by-reference) to a function[cite: 302, 303].
#include <stdio.h>

// Function to add 100 to each element of the array
void addNumber(int *ptr){
    int i;
    for(i = 0; i < 10; i++) {
        ptr[i] += 100;   // Correctly inside the loop
    }
}

int main(void){
    int i;
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    printf("Before function call:\n");
    for(i = 0; i < 10; i++){
        printf("%4d", arr[i]);
    }
    printf("\n");

    addNumber(arr);  // Call by reference

    printf("After function call:\n");
    for(i = 0; i < 10; i++){
        printf("%4d", arr[i]);
    }
    printf("\n");

    return 0;
}


// Lecture 3: Pointer Array - Loop accessibility
[cite_start]// Shows efficient access to array elements using a loop[cite: 304].
#include <stdio.h>
void main(void){
    int Data[100];
    int i = 0;
    for(i=0; i<100; i++){
        Data[i] += (100 * i);
    }
}

// Lecture 4: Function Pointer - Basic function pointer
[cite_start]// Demonstrates that function names represent addresses in memory[cite: 472].
#include <stdio.h>
void funcOne(void){ printf("funcOne was called!\n"); }
void funcTwo(void){ printf("funcTwo was called!\n"); }
void main(void){
    funcOne();
    funcTwo();
    printf("Address of funcOne: 0x%0x\n", funcOne);
    printf("Address of funcTwo: 0x%0x\n", funcTwo);
}

// Lecture 4: Function Pointer - Function call using pointer
[cite_start]// Demonstrates declaring a function pointer and assigning it a function address[cite: 472, 473].
#include <stdio.h>
int adder(int n1, int n2){ return n1 + n2; }
int main(void){
    int (*fPtr)(int, int);
    fPtr = adder;
    printf("using name of function:%d\n", adder(10, 20));
    printf("using function name:%d\n", fPtr(10, 20));
}


// Lecture 4: Function Pointer - Function pointer as parameter
[cite_start]// Demonstrates passing function pointers as arguments to other functions[cite: 474].
#include <stdio.h>
int adder (int n1, int n2){
printf("adder was called:");
return n1+n2;
}

int divider(int n1, int n2){

printf("divider was called: ");
return n1/n2;
}
void printResult(int n1, int n2, int(*fPtr)(int,int)){
printf("%d\n", fPtr(n1,n2));
}

int main(void){
    int num1=10;
    int num2=5;
    printResult(num1,num2,adder);
    printResult(num1,num2,divider);
    printf("\n");
}


// Lecture 4: Function Pointer - Function pointer as return type
[cite_start]// Demonstrates how to declare and return a function pointer from a function[cite: 474].
#include <stdio.h>
void func1(void){ printf("func1 was called!\n"); }
void func2(void){ printf("func2 was called!\n"); }
void (*whatFunction(int sel))(void){
    if(sel == 1) return func1;
    else return func2;
}
void main(void){
    void (*fPtr)(void);
    fPtr = whatFunction(1);
    fPtr();
    fPtr = whatFunction(2);
    fPtr();
}


/************************************
 * Section 2: Fragments
 ************************************/

[cite_start]// Lecture 2: Pointer Basic - Memory address example [cite: 7, 42]
// int num = 20;

[cite_start]// Lecture 2: Pointer Basic - Pointer declaration examples [cite: 7, 8]
// int num; int *ptr = &num;
// double num; double *ptr = &num;
// Person person; Person *pPtr = &person;

[cite_start]// Lecture 3: Pointer Array - Basic array declaration [cite: 286, 287]
// char arr[4] = {'a','b','c','d'};
// int arr[3] = {1,2,3};

[cite_start]// Lecture 3: Pointer Array - Array components [cite: 289, 339]
// int arr[10];

[cite_start]// Lecture 3: Pointer Array - Initialization (all values) [cite: 290, 347]
// char arr[8] = {1,2,3,4,5,6,7,8};

[cite_start]// Lecture 3: Pointer Array - Initialization (no length) [cite: 291, 353]
// char arr[] = {1,2,3,4,5,6,7,8};

[cite_start]// Lecture 3: Pointer Array - Initialization (partial values) [cite: 292, 364]
// char arr[8] = {1,2,3,4}; // Empty data filled with zero

[cite_start]// Lecture 3: Pointer Array - Initialization (nothing/empty) [cite: 293, 294, 372, 374]
// char arr[8] = { }; // All zero
// char arr[8]; // All garbage values

[cite_start]// Lecture 4: Function Pointer - Return type vs pointer declaration [cite: 474]
// int (*fPtr)(int); // Function pointer declaration
// int *fPtr(int);  // Function that returns an integer pointer
