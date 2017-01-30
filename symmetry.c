/*
Function determines if an array of integers is symmetrical.
*/

#include<stdio.h>

// initializes the functions used
int symmetrical(int[], int);
void tableFill(int[], int);

int main(void)
{
    // arrSize variable holds the user requested size of the array
    int arrSize = 0;
    // x variable used in the for loop
    int x = 0;

    // reading information from the user through stdin
    // asks the user for the wanted size of the array
    printf("please enter size of the array you want: ");
    scanf("%i", &arrSize);

    // creates the array according to the specifications
    int arr[arrSize];
    printf("\n");
    tableFill(arr, arrSize);

    // printing information to the user through stdout
    // print the array back to the user
    printf("your array is: [%i", *arr);
    for (x = 1; x < arrSize; x++) {
        printf(", %i", *(arr + x));
    }
    printf("]\n\n");

    // prints out the correct message to the user according
    // to the results of the symmetrical function
    if (symmetrical(arr, arrSize) == 0) {
        printf("your array is symmetrical!\n");
    } else {
        printf("your array is NOT symmetrical...\n");
    }

    return 0;
}

// function returns 0 if an array is symmetrical, 1 otherwise
int symmetrical(int arr[], int arrSize){
    // x variable used in the for loop
    int x = 0;
    // checks the end elements of the array, returns 1 if not equal
    for (x = 0; x < (arrSize - 1) / 2; x++) {
        if (arr[x] != arr[arrSize - 1 - x]) {
            return 1;
        }
    }

    return 0;
}

// fills the array with user inputed values
// if the array is full, prints an error message
void tableFill(int arr[], int arrSize) {
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
        printf("please enter an integer value to put into an array: ");
        scanf("%i", &number);
        // adds the number entered into the array
        arr[counter] = number;
        counter++;
    }
}
