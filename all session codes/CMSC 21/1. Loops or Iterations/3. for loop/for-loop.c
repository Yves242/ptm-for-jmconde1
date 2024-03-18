#include <stdio.h>

/* This code is a for-loop version of the original version from item #2. */

// Variable declarations
int num_variable = 0;
const int exit_value = 10;

// For-loop version
int main() {

    // start of for-loop
    for (int current_number=0; current_number<10; current_number++) {
        num_variable += 1;            // Update the number
        printf("%d\n", num_variable); // Print the number
    }

    // End of code
    return 0;
}



/* further explanation below for your reference


#====== for-loop version (1) ======#        #========= linear version (1) =========#

int num_variable = 0;                       int num_variable = 0

for (int i=0; i<1; i++) {                   // iteration 1
    num_variable++;                         num_variable ++;                             
    printf("%d\n", num_variable);           printf("%d\n", num_variable);
}

#==================================#        #======================================#





#====== for-loop version (3) ======#        #========= linear version (3) =========#

int num_variable = 0;                       int num_variable = 0

for (int i=0; i<3; i++) {                   // iteration 1
    num_variable++;                         num_variable ++;                             
    printf("%d\n", num_variable);           printf("%d\n", num_variable);
}

                                            // iteration 2
                                            num_variable ++;                             
                                            printf("%d\n", num_variable);


                                            // iteration 3
                                            num_variable ++;                             
                                            printf("%d\n", num_variable);


#==================================#        #======================================#





#====== for-loop version (10) =====#        #========= linear version (10) ========#

int num_variable = 0;                       int num_variable = 0

for (int i=0; i<10; i++) {                  // iteration 1
    num_variable++;                         num_variable ++;                             
    printf("%d\n", num_variable);           printf("%d\n", num_variable);
}

                                            // iteration 2
                                            num_variable ++;                             
                                            printf("%d\n", num_variable);


                                            // iteration 3
                                            num_variable ++;                             
                                            printf("%d\n", num_variable);


                                            // iteration 4
                                            num_variable ++;                             
                                            printf("%d\n", num_variable);


                                            // iteration 5
                                            num_variable ++;                             
                                            printf("%d\n", num_variable);


                                            // iteration 6
                                            num_variable ++;                             
                                            printf("%d\n", num_variable);


                                            // iteration 7
                                            num_variable ++;                             
                                            printf("%d\n", num_variable);


                                            // iteration 8
                                            num_variable ++;                             
                                            printf("%d\n", num_variable);


                                            // iteration 9
                                            num_variable ++;                             
                                            printf("%d\n", num_variable);


                                            // iteration 10
                                            num_variable ++;                             
                                            printf("%d\n", num_variable);

#==================================#        #======================================#


'''

*/