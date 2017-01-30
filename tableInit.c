/*
Sets every element of an array of integers to a particular value.
The function takes 3 parameters:
  - the array
  - its size
  - initial value to set the elements to
*/


#include<stdio.h>

// initialize the function used
void tableInit(int[], int, int);

int main(void)
{
    // arrSize variable holds the user requested size of the integer array
    int arrSize = 0;
    // value variable holds the user requested value to set all elements
    // of the integer array to
    int value = 0;
    // x variable used in the for loop
    int x = 0;

    // reading information from the user through stdin
    // asks the user for the wanted size of the array
    printf("please enter size of the integer array you want: ");
    scanf("%i", &arrSize);
    // asks the user for the initializing value of the integer array
    printf("please enter the integer value you would like the elements\n");
    printf("of the array to be initialized to: ");
    scanf("%i", &value);

    // creates the array according to the specifications
    int arr[arrSize];
    tableInit(arr, arrSize, value);

    // printing information to the user through stdout
    // print the array back to the user
    printf("your array is: [%i", *arr);
    for (x = 1; x < arrSize; x++) {
        printf(", %i", *(arr + x));
    }
    printf("]\n");

    return 0;
}

// sets every element in the array to the specified value
void tableInit(int arr[], int arrSize, int value) {
    // x variable used in the for loop
    int x = 0;
    // initializes all elements of the array
    for (x = 0; x < arrSize; x++) {
        arr[x] = value;
    }
}
