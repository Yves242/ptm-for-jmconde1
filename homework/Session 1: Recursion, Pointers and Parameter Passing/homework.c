#include <stdio.h>
#include <stdlib.h>

void recursion (int *ptr1) {
    if (*ptr1 <= 1){
        *ptr1 = 1;
    }

    *ptr1 = (recursion(*ptr1) * recursion((*ptr1-1)));
}

int main() {
    int num, *ptr1;

    printf ("Enter a positive integer: ");
    scanf("%d", &num);

    

    recursion (&num);

    printf ("Here was the result for your reference: %d", *ptr1);

    printf("\n\nProgram exited.\n");
    // put the value here
    // make variable here  


    

}