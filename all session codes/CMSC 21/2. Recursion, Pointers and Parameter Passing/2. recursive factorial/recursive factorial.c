#include <stdio.h>

/// @brief Function that calculates a factorial using recursion.
/// @param n The number whose factorial will be computed.
/// @return Integer value of the factorial result.
int recursiveFactorial(int n) {

    // if received n is 0 or 1, always return 1
    if (n==0 || n==1) return 1;
    
    // if received n is greater than 1, 
    // multiply that received n with another instance of itself with (n-1) 
    return n * recursiveFactorial(n-1);
}


// main function
int main() {

    // variable declarations
    int num, recursive_factorial_result;

    // Get the number for which to calculate factorial
    printf("[recursive] \n\nEnter a number to calculate factorial: ");
    scanf("%d", &num);

    // factorials not allowed if it is a negative integer. Print error then exit.
    if (num < 0) { printf("Factorial is not allowed for negative numbers.\n"); return 0; }
    
    // at this point, number (if not a string) is a positive or zero integer.
    recursive_factorial_result = recursiveFactorial(num);

    // print the result
    printf("The factorial expression '%i!' has a value of %i.\n\n", num, recursive_factorial_result);

    // exit 
    return 0;
}
