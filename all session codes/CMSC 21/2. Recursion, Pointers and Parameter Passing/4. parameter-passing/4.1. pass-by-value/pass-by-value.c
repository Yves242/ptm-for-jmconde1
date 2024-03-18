
/// @brief Function that returns the sum of two values. 
/// @param x The first number to be added.
/// @param y The second number to be added.
/// @return The sum of the two numbers.
int sum(int x, int y) {
    return (x+y);
}

// main function
int main() {
    
    // variable declarations
    int first_number = 77, second_number = 23;
    int returned_value;

    // title notification
    printf("[Pass-by-value]\n");

    // perform pass-by-value
    returned_value = sum(77, 23);

    // print the results
    printf("The sum of %i and %i is %i.\n", first_number, second_number, returned_value);

    return 0;
}