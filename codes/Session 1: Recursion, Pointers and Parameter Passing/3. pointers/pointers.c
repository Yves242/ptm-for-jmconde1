
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
    ptr1 = var1;    // valid?   
    ptr2 = ptr1;    // valid?
    ptr2 = &var1;   // valid?
    var1 = ptr1;    // valid?

    // PART 1.2: More operations
    ptr3 = var1;    // valid?
    ptr3 = ptr1;    // valid?
    

    // PART 2: using the '*' operator. 
    // '*' allows for ACCESS.
    ptr1 = ptr2;        // valid?   
    ptr1 = *(ptr2);     // valid?   
    *(ptr1) = ptr2;     // valid?   
    *(ptr1) = 3;        // valid?   
    ptr3 = ptr1;        // valid?
    *(ptr3) = ptr1;     // valid?
    ptr1 = *(ptr3);     // valid?
    *(ptr2) = *(ptr1);  // valid?
    var1 = ptr1;        // valid?
    

    // PART 3: using the '&' operator. 
    // '*' allows for ADDRESS REFERENCE.
    ptr1 = var1;     // valid?
    ptr1 = &var1;    // valid?
    ptr2 = &var2;    // valid?
    ptr3 = &var1;    // valid?
    ptr3 = &ptr1;    // valid?


    // PART 4: Combination of '&' and '*'
    *(ptr3) = &var1;
    *(ptr3) = &ptr1;
    *(ptr2) = &var1;
    *(ptr2) = &ptr3;
    *(ptr2) = *(&ptr3);
    *(&ptr2) = ptr1;
    var1 = *(&var2);
}