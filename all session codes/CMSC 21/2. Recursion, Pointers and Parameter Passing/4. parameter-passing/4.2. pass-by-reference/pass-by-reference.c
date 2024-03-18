
/// @brief Function that returns the sum of two values. 
/// @param x The first number to be added.
/// @param y The second number to be added.
/// @param memory_address_location The location where the sum will place the computed values.
/// @return Nothing.
void sum(int x, int y, int *memory_address_location) {

    // notice how this function returns 'void' aka NOTHING?
    // because it literally returns nothing. 

    // it stores the value to a specific memory address.


    // to store the value, access the memory location using 
    // the previously-discussed '*()' keyword concept. 
    *(memory_address_location) = x+y;
}

// main function
int main() {
    
    // variable declarations
    int first_number = 77, second_number = 23;

    // address location where
    int *put_returned_value_here;

    // title notification
    printf("[Pass-by-reference]\n");

    // perform pass-by-value
    sum(77, 23, put_returned_value_here);

    // print the results
    printf("The sum of %i and %i is %i.\n", first_number, second_number, *(put_returned_value_here));

    return 0;
}