/*
Function populates row 0 of a 2-D array with user input.
*/

#include<stdio.h>

// initialize the function
void twoArrayFill(int[][2], int);

int main(void)
{
    // arrSize global variable holds the user requested size of the array
    int arrSize = 0;

    // variables used in the for loops
    int z = 0;
    int x = 0;
    int y = 0;

    // reading information from the user through stdin
    // asks the user for the wanted size of the array
    printf("please enter size of the 2-D array you want: ");
    scanf("%i", &arrSize);

    // creates the 2-dimensional array according to the specifications
    int arr[arrSize][2];
    twoArrayFill(arr, arrSize);

    // modifies the array such that the second row contains the squares
    // of the user entered values
    for (z = 0; z < arrSize; z++) {
        *(*(arr + 1) + z) = (*(*(arr) + z)) * (*(*(arr) + z));
    }

    // printing information to the user through stdout
    // print the user entered first row of the array back to the user
    printf("your entered array is: [%i", *(*(arr)));
    for (x = 1; x < arrSize; x++) {
        printf(", %i", *(*(arr) + x));
    }
    printf("]\n");
    // print the modified second row of the array back to the user
    printf("your entered array squared is: [%i", *(*(arr + 1)));
    for (y = 1; y < arrSize; y++) {
        printf(", %i", *(*(arr + 1) + y));
    }
    printf("]\n");

    return 0;
}

// fills the array with user inputed values
// if the array is full, prints an error message
void twoArrayFill(int arr[][2], int arrSize) {
    // counter variable keeps track of the current number of
    // elements added to the array so far
    int counter = 0;
    // number variable keeps track of the current value to be
    // added to the array
    int number = 0;
    // x variable used in the for loop
    int x = 0;

    // reading information from the user through stdin
    // allows values to be added to the array while there is still space
    while (counter < arrSize) {
        // asks the user for an integer value to enter into the array
        printf("please enter an integer value to put into the first");
        printf(" row of the 2-D array: ");
        scanf("%i", &number);
        // adds the number entered into the array
        *(*(arr) + counter) = number;
        counter++;
    }
}
