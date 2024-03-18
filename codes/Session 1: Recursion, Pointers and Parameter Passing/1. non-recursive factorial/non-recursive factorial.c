#include <stdio.h>

/// @brief Function that calculates a factorial without using any recursion.
/// @param n The number whose factorial will be computed.
/// @return Integer value of the factorial result.
int nonrecursiveFactorial(int n) {

    // return value
    int ret_value = 1;

    // compute the factorial 
    for (int i=n; i>0; i--) {   // order:  n, n-1, n-2, ... , 3, 2, 1
        ret_value *= i;
    }

    // actually return the value
    return ret_value;
}



// main function
int main() {

    // variable declarations
    int num, nonrecursive_factorial_result;

    // Get the number for which to calculate factorial
    printf("[non-recursive] \n\nEnter a number to calculate factorial: ");
    scanf("%d", &num);

    // factorials not allowed if it is a negative integer. Print error then exit.
    if (num < 0) { printf("Factorial is not allowed for negative numbers.\n"); return 0; }
    
    
    // at this point, number (if not a string) is a positive or zero integer.
    nonrecursive_factorial_result = nonrecursiveFactorial(num);

    // print the result
    printf("The factorial expression '%i!' has a value of %i.\n\n", num, nonrecursive_factorial_result);

    // exit 
    return 0;
}
