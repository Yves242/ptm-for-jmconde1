#include <stdio.h>

/* This code is a while-loop version of the original version from item #2. */

// While-loop version
int main() {

    // variable declarations
    int num_variable = 0;
    int current_number = 0; 

    // Start of while loop 
    while (current_number < 10) {
        num_variable += 1;            // Update the number
        printf("%d\n", num_variable); // Print the number
        current_number++;             // Update the loop control variable
    }

    // End of code
    return 0;
}



/* further explanation below for your reference


#====== while-loop version (1) ======#        #========= linear version (1) =========#

int num_variable = 0;                       int num_variable = 0; 
int current_number = 0;                     int current_number = 0; 
                                            const int exit_value = 1;


while (current_number < 10) {               // Iteration 1
    num_variable++;                         num_variable += 1;
    printf("%d\n", num_variable);           printf("%d\n", num_variable);
    current_number++;                       current_number++;
}
                                            // Check if done?
                                            if (num_variable == exit_value) {
                                                exit(0);
                                            }
                                            
#==================================#        #======================================#





#====== while-loop version (3) ======#        #========= linear version (3) =========#

int num_variable = 0;                       int num_variable = 0; 
int current_number = 0;                     int current_number = 0; 
                                            const int exit_value = 3;


while (current_number < 10) {               // Iteration 1
    num_variable++;                         num_variable += 1;
    printf("%d\n", num_variable);           printf("%d\n", num_variable);
    current_number++;                       current_number++;
}
                                            // Check if done?
                                            if (num_variable == exit_value) {
                                                exit(0);
                                            }


                                            // Iteration 2 
                                            num_variable += 1;
                                            printf("%d\n", num_variable);
                                            current_number++;

                                            // Check if done?
                                            if (num_variable == exit_value) {
                                                exit(0);
                                            }    


                                            // Iteration 3
                                            num_variable += 1;
                                            printf("%d\n", num_variable);
                                            current_number++;

                                            // Check if done?
                                            if (num_variable == exit_value) {
                                                exit(0);
                                            }
    

#==================================#        #======================================#





#====== while-loop version (10) =====#        #========= linear version (10) ========#

int num_variable = 0;                       int num_variable = 0; 
int current_number = 0;                     int current_number = 0; 
                                            const int exit_value = 10;


while (current_number < 10) {               // Iteration 1
    num_variable++;                         num_variable += 1;
    printf("%d\n", num_variable);           printf("%d\n", num_variable);
    current_number++;                       current_number++;
}
                                            // Check if done?
                                            if (num_variable == exit_value) {
                                                exit(0);
                                            }


                                            // Iteration 2 
                                            num_variable += 1;
                                            printf("%d\n", num_variable);
                                            current_number++;

                                            // Check if done?
                                            if (num_variable == exit_value) {
                                                exit(0);
                                            }    


                                            // Iteration 3
                                            num_variable += 1;
                                            printf("%d\n", num_variable);
                                            current_number++;

                                            // Check if done?
                                            if (num_variable == exit_value) {
                                                exit(0);
                                            }


                                            // Iteration 4
                                            num_variable += 1;
                                            printf("%d\n", num_variable);
                                            current_number++;

                                            // Check if done?
                                            if (num_variable == exit_value) {
                                                exit(0);
                                            }


                                            // Iteration 5
                                            num_variable += 1;
                                            printf("%d\n", num_variable);
                                            current_number++;

                                            // Check if done?
                                            if (num_variable == exit_value) {
                                                exit(0);
                                            }


                                            // Iteration 6
                                            num_variable += 1;
                                            printf("%d\n", num_variable);
                                            current_number++;

                                            // Check if done?
                                            if (num_variable == exit_value) {
                                                exit(0);
                                            }


                                            // Iteration 7
                                            num_variable += 1;
                                            printf("%d\n", num_variable);
                                            current_number++;

                                            // Check if done?
                                            if (num_variable == exit_value) {
                                                exit(0);
                                            }


                                            // Iteration 8
                                            num_variable += 1;
                                            printf("%d\n", num_variable);
                                            current_number++;

                                            // Check if done?
                                            if (num_variable == exit_value) {
                                                exit(0);
                                            }


                                            // Iteration 9
                                            num_variable += 1;
                                            printf("%d\n", num_variable);
                                            current_number++;

                                            // Check if done?
                                            if (num_variable == exit_value) {
                                                exit(0);
                                            }


                                            // Iteration 10
                                            num_variable += 1;
                                            printf("%d\n", num_variable);
                                            current_number++;

                                            // Check if done?
                                            if (num_variable == exit_value) {
                                                exit(0);
                                            }
    
#==================================#        #======================================#


'''

*/