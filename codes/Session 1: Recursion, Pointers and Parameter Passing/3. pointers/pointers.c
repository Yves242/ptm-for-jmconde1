#include <stdio.h>

// main function
int main() {

    // instantiation of normal variables
    int var1 = 1;   // no '*' means just variable (level 0)
    int var2 = 2;   // no '*' means just variable (level 0)

    // instantiation of pointers
    int *ptr1;  //  '*' means pointer-type (level 1) 
    int *ptr2;  //  '*' means pointer-type (level 1)
    int **ptr3; // '**' means pointer-type (level 2)
    
    // plot using the box-and-pointer diagram.


    // Note on the following: no more 'int' keyword. NOT initialization.
    // try. Use your box-and-pointer diagram.
    
    // PART 1.1: Normal operations
    // ptr1 = var1;    // valid?       No
    ptr2 = ptr1;    // valid?       Yes
    ptr2 = &var1;   // valid?       Yes
    // var1 = ptr1;    // valid?       No

    // PART 1.2: More operations
    // ptr3 = var1;    // valid?       No
    ptr3 = &ptr1;    // valid?       Yes
    

    // PART 2: using the '*' operator. 
    // '*' allows for ACCESS.
    ptr1 = ptr2;        // valid?   Yes
    // ptr1 = *(ptr2);     // valid?   No
    // *(ptr1) = ptr2;     // valid?   simplified expr: 1 = &var1; No.
    *(ptr1) = 3;        // valid?   Yes
    ptr3 = &ptr1;        // valid?   Yes
    *(ptr3) = ptr1;     // valid?   Yes   
    ptr1 = *(ptr3);     // valid?   Yes
    *(ptr2) = *(ptr1);  // valid?   Yes
    // var1 = ptr1;        // valid?   
    

    // PART 3: using the '&' operator. 
    // '*' allows for ADDRESS REFERENCE.
    // ptr1 = var1;     // valid?  No
    ptr1 = &var1;    // valid?  Yes
    ptr2 = &var2;    // valid?  Yes
    // ptr3 = &var1;    // valid?  No
    ptr3 = &ptr1;    // valid?  Yes


    // PART 4: Combination of '&' and '*'
    *(ptr3) = &var1;        // valid?   Yes
    // *(ptr3) = &ptr1;        // valid?   No
    // *(ptr2) = &var1;        // valid?   No
    // *(ptr2) = &ptr3;        // valid?   No
    // *(ptr2) = *(&ptr3);     // valid?   No
    *(&ptr2) = ptr1;        // valid?   Yes
    var1 = *(&var2);        // valid?   Yes

    printf("ptr3: %i\n", **ptr3);
    printf("ptr2: %i\n", *ptr2);
    printf("ptr1: %i\n", *ptr1);
    printf("var2: %i\n", var2);
    printf("var1: %i\n", var1);
}



// void func(int *****level5_ptr) {
//     // You want to access the value
//     printf("The value of the variable is %i\n", *****level5_ptr);
// }