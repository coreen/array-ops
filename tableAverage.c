/*
Computes and returns the average of the first n elements of
an array of integers.
*/

#include<stdio.h>

// initialize the functions used
float tableAverage(int[], int);
void tableFill(int[], int);

int main(void)
{
    // arrSize variable holds the user requested size of the array
    int arrSize = 0;
    // number variable holds the first number of elements in the
    // integer array that the user wants to average
    int number = 0;
    // x variable used in the for loop
    int x = 0;

    // reading information from the user through stdin
    // asks the user for the wanted size of the array
    printf("please enter size of the array you want: ");
    scanf("%i", &arrSize);
    // asks for the first number of values in the array to average
    printf("please enter the number of elements from the array you");
    printf(" want to average: ");
    scanf("%i", &number);

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
    printf("]\n");

    // print out the average of the given values in the array
    printf("\nthe average of the first %i values in the integer ", number);
    printf("array is: %.2f\n", tableAverage(arr, number));

    return 0;
}

// computes and returns the first n elements of an integer array
float tableAverage(int arr[], int n) {
    // used to help compute the average
    float sum = 0;
    // used in the for loop to calculate the sum
    int x = 0;
    for (x = 0; x < n; x++) {
        sum+=*(arr + x);
    }
    return sum / n;
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
