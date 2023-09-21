#include <stdio.h>

// Function to perform insertion sort on an array
void insertionSort(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        int currentElement = arr[i]; // Store the current element for insertion
        int j = i - 1; // Initialize j to the index of the last sorted element

        // While the left-side element is greater than the current element
        while (j >= 0 && arr[j] > currentElement) {
            arr[j + 1] = arr[j]; // Shift the larger element to the right
            j--; // Move left to compare with the next element
        }

        arr[j + 1] = currentElement; // Place the current element in its correct position
    }
}

int main() {
    int numArray[10];

    printf("Please enter 10 integers separated by a space:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &numArray[i]); 
    }

    insertionSort(numArray, 10); 

    printf("The list after sorting:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", numArray[i]); 
    }
    printf("\n");

    return 0;
}
